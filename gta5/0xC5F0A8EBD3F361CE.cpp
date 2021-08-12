// barry3a.ysc @ L46867
void func_463()
{
  if (func_471())
  {
  }
  func_464(&Local_81, 1, 0, 0);
  func_393(0);
  PED::SET_CREATE_RANDOM_COPS(true);
  PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_164[0], false);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_164[1], false);
  MISC::SET_INSTANCE_PRIORITY_HINT(0);
  SCRIPT::TERMINATE_THIS_THREAD();
}