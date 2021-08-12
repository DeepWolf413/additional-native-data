// hideout_shadybelle.ysc @ L2936
void func_78()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < Local_60.f_199)
  {
    if (func_184(Local_284[iVar0 /*9*/].f_5, 0, 1))
    {
      PED::SET_PED_CONFIG_FLAG(Local_284[iVar0 /*9*/].f_5, 246, true);
      PED::SET_PED_CONFIG_FLAG(Local_284[iVar0 /*9*/].f_5, 234, true);
      TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_284[iVar0 /*9*/].f_5, true);
      TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_284[iVar0 /*9*/].f_5, true, 0.1f);
      TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_284[iVar0 /*9*/].f_5, false);
      DECORATOR::DECOR_SET_INT(Local_284[iVar0 /*9*/].f_5, "iDamageFrame", -1);
      PED::SET_PED_HEARING_RANGE(Local_284[iVar0 /*9*/].f_5, 14f);
      TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(Local_284[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_284[iVar0 /*9*/].f_5, true, false), 10f);
      PED::SET_PED_COMBAT_MOVEMENT(Local_284[iVar0 /*9*/].f_5, 2);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_284[iVar0 /*9*/].f_5, 30, true);
      PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1.1f);
    }
    iVar0++;
  }
}