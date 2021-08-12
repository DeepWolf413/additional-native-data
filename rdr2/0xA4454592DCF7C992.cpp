// shop_horse_shop_sp.ysc @ L49425
bool func_1523(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < uParam0->f_70)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_70[iVar0]) && (FIRE::_0xA4454592DCF7C992(uParam0->f_70[iVar0]) || FIRE::_0xCDC25355C0D65963(uParam0->f_70[iVar0])))
    {
      return true;
    }
    iVar0++;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < uParam0->f_26)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26[iVar0]) && (FIRE::_0xA4454592DCF7C992(uParam0->f_26[iVar0]) || FIRE::_0xCDC25355C0D65963(uParam0->f_26[iVar0])))
    {
      return true;
    }
    iVar0++;
  }
  return false;
}