// business_battles.ysc @ L255318
void func_3924(int iParam0)
{
  float fVar0;
  
  if (!func_3925())
  {
    return;
  }
  if (!func_617(NETWORK::PARTICIPANT_ID(), 34))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409[iParam0]))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uLocal_2409[iParam0]), false))
      {
        fVar0 = VEHICLE::_GET_VEHICLE_BODY_HEALTH_2(NETWORK::NET_TO_VEH(uLocal_2409[iParam0]), 1000f, 1000f, 1000f, 1000f, 1000f, 1000f);
        if (fVar0 < 25f)
        {
          func_3887(34);
        }
      }
    }
  }
}