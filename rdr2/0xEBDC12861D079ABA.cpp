// beat_bandito_breakout.ysc @ L3694
int func_98(bool bParam0, bool bParam1)
{
  var uVar0[1];
  int iVar2[1];
  int iVar4;
  int iVar5;

  iVar4 = 0;
  if (bParam0)
  {
    iVar2[0] = joaat("P_KEROSENETABLELAMP01X");
    iVar5 = func_281(&uVar0, &iVar2, 1, -3625.123f, -2603.334f, -13.5535f, 1f);
    if (iVar5 > 0)
    {
      ENTITY::_0xEBDC12861D079ABA(uVar0[0], 1);
      iVar4 = 1;
    }
  }
  if (bParam1)
  {
    iVar2[0] = joaat("P_LANTERN05X");
    iVar5 = func_281(&uVar0, &iVar2, 1, -3626.805f, -2607.147f, -12.8017f, 1f);
    if (iVar5 > 0)
    {
      ENTITY::_0xEBDC12861D079ABA(uVar0[0], 1);
      iVar4 = 1;
    }
  }
  return iVar4;
}