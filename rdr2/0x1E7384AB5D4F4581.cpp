// ambush_bnd_cliff1.ysc @ L1891
bool func_57(int iParam0, bool bParam1)
{
  var uVar0;
  int iVar1;
  struct<2> Var2;

  if (bParam1)
  {
    if (Global_40.f_9632[iParam0 /*4*/] > 0)
    {
      if (Global_40.f_9632[iParam0 /*4*/] >= func_205(iParam0))
      {
        return true;
      }
      Var2 = { func_155(joaat("TOTAL_PLAYING_TIME")) };
      if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
      {
        iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
        if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
        {
          return false;
        }
      }
    }
  }
  return Global_40.f_9632[iParam0 /*4*/] > 0;
}