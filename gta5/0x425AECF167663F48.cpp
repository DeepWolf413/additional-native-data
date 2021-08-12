// am_mp_hangar.ysc @ L375350
int func_6209(int* iParam0, var uParam1)
{
  if (((!func_86(uParam1->f_31) && !func_100(uParam1->f_31, -1)) && !func_81(uParam1->f_31, 0, 0)) && !func_54(PLAYER::PLAYER_ID()))
  {
    if (!TASK::PED_HAS_USE_SCENARIO_TASK(PLAYER::PLAYER_PED_ID()))
    {
      PED::_0x425AECF167663F48(PLAYER::PLAYER_PED_ID(), false);
      MISC::CLEAR_BIT(iParam0, 6);
      return 1;
    }
    else if (!MISC::IS_BIT_SET(*iParam0, 6))
    {
      PED::_0x425AECF167663F48(PLAYER::PLAYER_PED_ID(), true);
      TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
      MISC::SET_BIT(iParam0, 6);
    }
  }
  else if ((!func_53(PLAYER::PLAYER_ID()) && !iParam0->f_2480) && !iParam0->f_2481)
  {
    if (!func_6210(PLAYER::PLAYER_ID()))
    {
      Global_31620 = 14;
    }
    return 1;
  }
  return 0;
}