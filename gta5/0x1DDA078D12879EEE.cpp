// fm_content_island_heist.ysc @ L28199
void func_640(int iParam0, int iParam1)
{
  if (func_180(iParam0, 15))
  {
    return;
  }
  if (Local_792.f_891.f_1[iParam0 /*14*/].f_3 == joaat("patrolboat"))
  {
    VEHICLE::SET_BOAT_ANCHOR(iParam1, false);
    VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
    VEHICLE::_0x7D6F9A3EF26136A0(iParam1, false, true);
    VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam1, false, true);
  }
  VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
  VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 2);
}