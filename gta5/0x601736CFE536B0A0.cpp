// fm_content_island_heist.ysc @ L35942
void func_1115(int iParam0)
{
  switch (iParam0)
  {
    case 0:
      AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_01_avngr_radio", false);
      break;
    
    case 1:
      if (func_1116())
      {
        TASK::TASK_SKY_DIVE(iLocal_12605, true);
      }
      else
      {
        WEAPON::SET_CURRENT_PED_WEAPON(iLocal_12605, joaat("weapon_unarmed"), true);
        PED::SET_PED_RAGDOLL_FORCE_FALL(iLocal_12605);
      }
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_12697.f_795[0 /*6*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_12697.f_795[0 /*6*/]), false))
      {
        ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_12605, NETWORK::NET_TO_ENT(Local_12697.f_795[0 /*6*/]), true);
      }
      break;
  }
}