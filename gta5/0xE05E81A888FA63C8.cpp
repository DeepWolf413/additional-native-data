// am_airstrike.ysc @ L2053
int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
  if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
  {
    return 0;
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
  {
    return 0;
  }
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
  {
    return 0;
  }
  *uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
  {
    ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
    if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
    {
      if (bParam5)
      {
        NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
      }
    }
    return 1;
  }
  return 0;
}