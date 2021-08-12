// native_son2.ysc @ L26070
void func_449(bool bParam0, bool bParam1, bool bParam2)
{
  if (func_425(Global_35, 0))
  {
    if (bParam0)
    {
      TASK::CLEAR_PED_TASKS(Global_35, false, false);
      TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
    }
    if (bParam1)
    {
      func_881(0, 0);
    }
    if (bParam2)
    {
      TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
    }
    PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
    PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::GET_PLAYER_INDEX());
    PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
    PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 14, 1, 0);
  }
}