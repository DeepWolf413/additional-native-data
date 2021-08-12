// grays1.ysc @ L35472
bool func_766(var uParam0)
{
  if (!func_910(Local_538[1 /*17*/], 0))
  {
    return false;
  }
  if (func_910(Local_538[1 /*17*/], 0))
  {
    PED::SET_IK_TARGET(Local_538[1 /*17*/], 1, Global_35, 21030, 0f, 0f, 0f, 0, -1, -1);
  }
  func_1308();
  AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 0);
  VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_662[0], 0);
  VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_662[0], 2);
  VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_662[0], 3);
  VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_662[0], 1);
  VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_662[0], 4);
  iLocal_616 = 0;
  return uParam0->f_607 == uParam0->f_607;
}