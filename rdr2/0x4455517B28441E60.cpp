// beat_poisoned.ysc @ L5423
void func_165(int iParam0)
{
  if (!func_32(uLocal_58[0], 0, 0))
  {
    return;
  }
  if (func_36(256))
  {
    func_148(1024);
  }
  else
  {
    TASK::SET_PED_PATH_AVOID_FIRE(uLocal_58[0], true);
    TASK::_0x8BB283A7888AD1AD(uLocal_58[0], 1, 50f);
    TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uLocal_58[0], true, 50f);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_58[0], false);
    func_379(uLocal_58[0], 2);
    func_381(uLocal_58[0], func_380(iLocal_508, iLocal_509));
    if (iParam0 != 6)
    {
      func_382(uLocal_58[0], iParam0, Global_35, 0);
    }
    else
    {
      TASK::_TASK_MOVE_IN_TRAFFIC_3(uLocal_58[0], Global_35, 1f, 0, 0);
    }
    func_148(1024);
    func_51(&uLocal_584, &uLocal_585);
  }
}