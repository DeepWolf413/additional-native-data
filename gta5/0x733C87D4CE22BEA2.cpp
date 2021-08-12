// barry2.ysc @ L43383
int func_420(int iParam0)
{
  var uVar0;
  
  if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_834[iParam0 /*11*/].f_2, &uVar0, false, false))
  {
    Local_834[iParam0 /*11*/].f_2.f_2 = uVar0;
  }
  if (Local_834[iParam0 /*11*/].f_2.f_2 < 28f)
  {
    return 0;
  }
  Local_834[iParam0 /*11*/] = PED::CREATE_PED(26, Local_834[iParam0 /*11*/].f_1, Local_834[iParam0 /*11*/].f_2, Local_834[iParam0 /*11*/].f_5, true, true);
  if (!ENTITY::DOES_ENTITY_EXIST(Local_834[iParam0 /*11*/]))
  {
    return 0;
  }
  PED::_0x733C87D4CE22BEA2(Local_834[iParam0 /*11*/]);
  AUDIO::STOP_PED_SPEAKING(Local_834[iParam0 /*11*/], true);
  PED::SET_PED_DIES_WHEN_INJURED(Local_834[iParam0 /*11*/], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_834[iParam0 /*11*/], true);
  PED::SET_PED_MONEY(Local_834[iParam0 /*11*/], 0);
  ENTITY::SET_ENTITY_HEALTH(Local_834[iParam0 /*11*/], 100, 0);
  Local_834[iParam0 /*11*/].f_6 = 0;
  Local_834[iParam0 /*11*/].f_7 = 1;
  Local_834[iParam0 /*11*/].f_10 = 0;
  return 1;
}