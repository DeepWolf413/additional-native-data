// am_casino_peds.ysc @ L214902
int func_2041()
{
  if (func_2042(PLAYER::PLAYER_PED_ID()) && (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) >= 0))
  {
    return 1;
  }
  return 0;
}