// camp_beaverhollow.ysc @ L18451
void func_615(int iParam0, var uParam1)
{
  int iVar0;

  iVar0 = func_1014(iParam0);
  if (!DATAFILE::_0x4F9E3ED7617123AC(iVar0))
  {
    return;
  }
  uParam1->f_2 = DATAFILE::_0xD97D8D905F1562F2(iVar0);
  MISC::SET_BIT(&(uParam1->f_254), 1);
}