// am_mp_arcade.ysc @ L304146
int func_4783(int iParam0)
{
  int iVar0;
  
  if (func_229())
  {
    func_4784(1981664462, 0, &iVar0, 0, 1, 0);
    Global_4265506[iVar0 /*85*/] = iParam0;
    return iVar0;
  }
  else
  {
    MONEY::_NETWORK_SPENT_BEACH_PARTY_GENERIC(iParam0);
  }
  return -1;
}