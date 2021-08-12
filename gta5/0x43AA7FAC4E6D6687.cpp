// am_mp_arcade.ysc @ L304799
int func_4796(int iParam0, int iParam1)
{
  int iVar0;
  
  if (func_229())
  {
    func_4784(-697248883, iParam0, &iVar0, 0, 1, 0);
    Global_4265506[iVar0 /*85*/] = iParam1;
    return iVar0;
  }
  else
  {
    MONEY::_NETWORK_SPENT_ARCADE_GENERIC(iParam0, 0, 1, iParam1, iParam0);
  }
  return -1;
}