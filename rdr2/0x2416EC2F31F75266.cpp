// beat_savage_fight.ysc @ L10087
void func_321()
{
  if (!bLocal_1271)
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_472[2]))
    {
      func_309(iLocal_472[2], Global_35);
      TASK::OPEN_SEQUENCE_TASK(&iLocal_208);
      if (func_507())
      {
        TASK::TASK_AIM_AT_ENTITY(0, Global_35, 1000, 1, 1);
        TASK::_0x2416EC2F31F75266(0, Global_35, 10000, 0, 1);
      }
      TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 0);
      TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
      func_45(iLocal_472[2], &iLocal_208, 0, 0, 1, 1);
      func_517(2);
      if (ENTITY::DOES_ENTITY_EXIST(Local_659[2 /*12*/].f_8))
      {
        ENTITY::SET_ENTITY_VISIBLE(Local_659[2 /*12*/].f_8, false);
      }
    }
    bLocal_1271 = true;
  }
}