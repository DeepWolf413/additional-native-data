// act_cinema.ysc @ L4254
int func_114(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
      {
        if (iVar1 == iParam0)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}