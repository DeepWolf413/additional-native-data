// fm_mission_controller_2020.ysc @ L797374
void func_14840(int iParam0, int iParam1, int iParam2)
{
  func_1074(iParam0, iParam1, iParam2);
  if (func_3652(iParam2, 1))
  {
    if (VEHICLE::CAN_ANCHOR_BOAT_HERE(iParam0))
    {
      VEHICLE::SET_BOAT_ANCHOR(iParam0, true);
    }
  }
}