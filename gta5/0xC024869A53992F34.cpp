// agency_heist3b.ysc @ L136876
int func_1044(float fParam0)
{
  struct<3> Var0;
  
  Var0 = { func_1045(PLAYER::PLAYER_ID()) };
  if (Var0.f_2 < fParam0)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
      {
        if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
        {
          return 1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return 0;
}