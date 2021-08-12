// am_casino_peds.ysc @ L153472
void func_1428(int iParam0)
{
  bool bVar0;
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 < 32)
  {
    bVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
    if (func_410(bVar0, 0, 1) && bVar0 != PLAYER::PLAYER_ID())
    {
      if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar0), iParam0, false) && !func_1431(bVar0))
      {
        func_1429(func_1430(bVar0), 0, 0f, 0, 0, 0, -1);
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, bVar0, true);
      }
    }
    bVar1++;
  }
}