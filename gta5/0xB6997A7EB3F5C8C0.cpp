// agency_heist3a.ysc @ L107748
int func_630(int iParam0)
{
  if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
  {
    *iParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
    if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
      {
        return 1;
      }
    }
  }
  return 0;
}