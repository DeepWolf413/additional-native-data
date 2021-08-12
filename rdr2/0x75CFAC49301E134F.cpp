// property_use_core.ysc @ L15230
int func_560(var uParam0, bool bParam1)
{
  int iVar0;

  if (!func_605(uParam0))
  {
  }
  iVar0 = 0;
  if (!func_1086(uParam0, uParam0->f_2031.f_74, &iVar0))
  {
  }
  if (!func_1085(uParam0, iVar0))
  {
  }
  if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_68))
  {
    INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_68, 0, 0);
  }
  else
  {
    uParam0->f_2031.f_68 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
  }
  func_831(uParam0, 0);
  return 1;
}