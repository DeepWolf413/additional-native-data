// act_bankrobbery01.ysc @ L49453
bool func_1501(var uParam0, var uParam1, int iParam2, int iParam3)
{
  int iVar0;

  if (!func_1502(1) || !func_993(1))
  {
    return false;
  }
  iVar0 = AUDIO::_0xF336E9F989B3518F(func_227(iParam3));
  if (iVar0 != -1)
  {
    if (uParam0->f_276[iVar0 /*4*/] == uParam1->f_40[iParam2])
    {
      return true;
    }
  }
  return false;
}