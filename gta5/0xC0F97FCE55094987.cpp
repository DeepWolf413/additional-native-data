// fm_horde_controler.ysc @ L196404
void func_2293(int iParam0)
{
  if (func_2294())
  {
    if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(NETWORK::NET_TO_VEH(iParam0)))
    {
      VEHICLE::SET_VEHICLE_SEARCHLIGHT(NETWORK::NET_TO_VEH(iParam0), true, false);
    }
  }
  else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(NETWORK::NET_TO_VEH(iParam0)))
  {
    VEHICLE::SET_VEHICLE_SEARCHLIGHT(NETWORK::NET_TO_VEH(iParam0), false, false);
  }
}