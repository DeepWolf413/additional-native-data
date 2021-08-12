// am_mp_arcade.ysc @ L304771
int func_4795(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
  int iVar0;
  
  if (func_229())
  {
    iVar0 = -1;
    func_4784(-910968288, iParam1, &iVar0, 0, 1, 0);
    if (iVar0 != -1)
    {
      *uParam0 = iVar0;
      Global_4265506[*uParam0 /*85*/] = iParam2;
      Global_4265506[*uParam0 /*85*/].f_10 = iParam3;
      Global_4265506[*uParam0 /*85*/].f_11 = iParam4;
      Global_4265506[*uParam0 /*85*/].f_12 = iParam5;
      Global_4265506[*uParam0 /*85*/].f_6 = iParam6;
      Global_4265506[*uParam0 /*85*/].f_7 = iParam7;
      return 1;
    }
  }
  else
  {
    MONEY::_NETWORK_SPENT_CASINO_CLUB_GENERIC(iParam1, 0, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
    return 1;
  }
  return 0;
}