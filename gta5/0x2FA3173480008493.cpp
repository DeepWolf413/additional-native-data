// am_mp_arc_cab_manager.ysc @ L92173
void func_813(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  
  func_814(iParam0, &(uParam1->f_742), uParam1->f_732);
  if (MISC::IS_BIT_SET(*iParam0, 0))
  {
    iVar0 = 0;
  }
  else
  {
    iVar0 = iParam4;
  }
  STATS::_0x2FA3173480008493(iParam2, iParam3, MISC::IS_BIT_SET(*iParam0, 0), iVar0, iParam5);
}