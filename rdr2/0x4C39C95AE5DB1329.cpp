// abigail2_1.ysc @ L72766
void func_2098(var uParam0, var uParam1, int iParam2, bool bParam3)
{
  int iVar0;

  if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
  {
    PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
  }
  uParam0->f_4 = uParam1;
  iVar0 = 14;
  if (bParam3)
  {
    iVar0 |= 1;
  }
  uParam0->f_9 = PED::_0x4C39C95AE5DB1329(uParam1, iParam2, iVar0);
}