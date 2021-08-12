// freemode.ysc @ L1007442
int func_15817()
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (VEHICLE::IS_VEHICLE_IN_BURNOUT(iVar0))
      {
        return 1;
      }
    }
    if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
    {
      return 1;
    }
  }
  return 0;
}