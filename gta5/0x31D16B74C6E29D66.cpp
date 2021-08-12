// abigail2.ysc @ L46472
void func_465(int iParam0)
{
  func_7(&uLocal_88, 0, 0);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_161, false);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161);
  func_6(&iLocal_170);
  func_476(&iLocal_169, 1, 0, 1);
  if (func_464(iLocal_162))
  {
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_162, 1);
  }
  func_394(&iLocal_162);
  func_352();
  func_475(&uLocal_173, 3);
  func_466(&Local_100, 0, 0, 0);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_353, false);
  if (iParam0 == 1)
  {
    SCRIPT::TERMINATE_THIS_THREAD();
  }
}