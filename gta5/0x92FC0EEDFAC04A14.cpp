// am_mp_arc_cab_manager.ysc @ L96553
void func_966(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  int iVar1;
  
  func_814(iParam0, &(uParam1->f_742), uParam1->f_732);
  iVar1 = iParam0->f_1;
  if (MISC::IS_BIT_SET(*iParam0, 0))
  {
    iVar0 = 0;
  }
  else
  {
    iVar0 = iParam5;
  }
  STATS::_0x92FC0EEDFAC04A14(iParam2, iParam3, iParam4, MISC::IS_BIT_SET(*iParam0, 0), iVar0, iVar1);
}