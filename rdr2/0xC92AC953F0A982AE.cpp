// camera_item.ysc @ L3382
bool func_112(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;

  if (bParam2 && !func_64(iParam0))
  {
    return false;
  }
  iVar0 = func_65(iParam0);
  return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}