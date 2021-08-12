// act_cinema.ysc @ L4191
int func_110(int iParam0)
{
  int iVar0;
  bool bVar1;
  
  if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
  {
    iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      if (PED::IS_PED_A_PLAYER(iVar0))
      {
        bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
        if (func_36(bVar1, 0, 0))
        {
          if (func_111(bVar1))
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}