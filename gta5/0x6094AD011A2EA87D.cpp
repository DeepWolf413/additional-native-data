// act_cinema.ysc @ L96083
int func_713(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    iVar1 = iVar0;
    if (!iVar1 == PLAYER::PLAYER_ID())
    {
      if (func_36(iVar1, 1, 1))
      {
        if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), true))
        {
          if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(bVar1)) == iParam0)
          {
            return 1;
          }
        }
      }
    }
    iVar0++;
  }
  return 0;
}