// am_casino_peds.ysc @ L161903
int func_1472(int iParam0)
{
  int iVar0;
  struct<2> Var1;
  
  iVar0 = 0;
  while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
  {
    if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
    {
      if (iParam0 == Var1.f_1)
      {
        return iVar0;
      }
    }
    iVar0++;
  }
  return -1;
}