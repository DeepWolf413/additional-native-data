// beat_savage_fight.ysc @ L1961
void func_36(bool bParam0)
{
  if (bLocal_1274)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_659[2 /*12*/].f_8))
    {
      if (ENTITY::IS_ENTITY_ATTACHED(Local_659[2 /*12*/].f_8))
      {
        ENTITY::DETACH_ENTITY(Local_659[2 /*12*/].f_8, true, true);
        TASK::STOP_ANIM_PLAYBACK(Local_659[2 /*12*/].f_8, 0, false);
      }
      PHYSICS::ACTIVATE_PHYSICS(Local_659[2 /*12*/].f_8);
    }
    if (ENTITY::DOES_ENTITY_EXIST(Local_659[1 /*12*/].f_8))
    {
      ENTITY::DETACH_ENTITY(Local_659[1 /*12*/].f_8, true, true);
      TASK::STOP_ANIM_PLAYBACK(Local_659[1 /*12*/].f_8, 0, false);
      if (bParam0 && !PED::IS_PED_RAGDOLL(iLocal_472[2]))
      {
        WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&(Local_659[1 /*12*/].f_8), iLocal_472[2], 752097756, true);
      }
      else
      {
        PHYSICS::ACTIVATE_PHYSICS(Local_659[1 /*12*/].f_8);
      }
    }
    bLocal_1274 = false;
  }
}