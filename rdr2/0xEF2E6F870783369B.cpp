// fussar1.ysc @ L74053
void func_1857(int iParam0)
{
  int iVar0;

  if (!func_445(iParam0, 0))
  {
    return;
  }
  if (!func_1292(Global_35, iLocal_1317[32], 1, 0))
  {
    iVar0 = PED::_0xEF2E6F870783369B(iParam0, 0);
    if (iVar0 != iLocal_1363[2])
    {
      PED::SET_PED_COMBAT_RANGE(iParam0, 0);
      func_1865(iParam0, iLocal_1363[2], 0, 0);
    }
  }
}