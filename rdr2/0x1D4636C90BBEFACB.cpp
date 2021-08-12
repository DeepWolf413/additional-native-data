// short_update.ysc @ L134808
void func_4508(var uParam0, int iParam1, int iParam2)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return;
  }
  PED::_0x1D4636C90BBEFACB(iParam1, 1);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam1, func_4376(uParam0, iParam2), uParam0->f_59[iParam2], true, false, true);
  uParam0->f_70[iParam2] = iParam1;
  func_4560(iParam1);
}