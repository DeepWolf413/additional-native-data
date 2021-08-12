// beat_arms_deal.ysc @ L12046
bool func_374(int iParam0)
{
  if (!func_28(1024) || iLocal_1248 != iParam0)
  {
    return false;
  }
  else if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || !PED::IS_PED_IN_VEHICLE(iLocal_35[iParam0], iLocal_34, true))
  {
    return false;
  }
  else if (PED::IS_PED_ON_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false))
  {
    return false;
  }
  func_213(4194304, iParam0);
  func_300(&iLocal_1274, 11, iLocal_1248);
  return true;
}