// agency_heist3a.ysc @ L119106
int func_792(int iParam0, int iParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
    {
      if (func_793(PLAYER::PLAYER_PED_ID(), iParam0))
      {
        PED::SET_GROUP_SEPARATION_RANGE(func_783(), 50f);
        return 1;
      }
    }
    else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_783()))
    {
      PED::SET_GROUP_SEPARATION_RANGE(func_783(), 50f);
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}