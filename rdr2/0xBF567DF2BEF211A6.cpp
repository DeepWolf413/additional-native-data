// fussar1.ysc @ L34595
int func_751(char[4] cParam0)
{
  PED::_0xDE7B2B4144906CDF(1643739761, Global_35);
  PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
  func_1243();
  func_467(&iLocal_637);
  if (func_445(Global_35, 0))
  {
    PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "NarrowLedge", false, -1);
    func_443(sLocal_213, 0, 0);
    PED::_0xBF567DF2BEF211A6(Global_35, 4);
    PED::SET_PED_CONFIG_FLAG(Global_35, 432, false);
  }
  if (func_445(iLocal_1282, 0))
  {
    TASK::CLEAR_PED_TASKS(iLocal_1282, true, false);
    func_1258(cParam0, iLocal_1282, 1);
  }
  func_1259(1);
  return 1;
}