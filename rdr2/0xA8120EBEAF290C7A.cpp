// abigail2_1.ysc @ L73745
bool func_2114(int iParam0, bool bParam1)
{
  int iVar0;

  if (!func_947(iParam0))
  {
    return false;
  }
  if (!bParam1)
  {
    if (func_453(iParam0) || func_454(iParam0, 44, 1))
    {
      return false;
    }
  }
  if (!PERSCHAR::_0x800DF3FC913355F3(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
  {
    return false;
  }
  iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
  return iVar0 == joaat("SLEEP");
}