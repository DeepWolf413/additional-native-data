// fmmc_launcher.ysc @ L568836
void func_8836(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  
  if (func_8837(iParam1))
  {
    if (iParam2 == 0)
    {
      iVar0 = 0;
    }
    else
    {
      iVar0 = 0;
    }
    if ((iParam3 > -1 && iParam4 > -1) && iParam5 > -1)
    {
      func_234(*uParam0, 11, iVar0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
      PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iParam3, iParam4, iParam5, 0);
      PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iParam3, iParam4, iParam5, 1);
      PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iParam3, iParam4, iParam5, 2);
      PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iParam3, iParam4, iParam5, 3);
    }
  }
}