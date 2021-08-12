// mudtown3.ysc @ L61338
int func_1534(var uParam0, var uParam1)
{
  if (func_400(uParam1->f_4, 1))
  {
    return 1;
  }
  if (!func_258(76))
  {
    return 0;
  }
  func_2110(10, 1, 0, 0, 0, 0);
  *uParam1 = func_2111(10, 1, 0, 0, 1, 1);
  if (!func_457(*uParam1, 0))
  {
    return 0;
  }
  PED::SET_PED_NAME_DEBUG(*uParam1, "ShopKeep");
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*uParam1, -324.1f, 803.62f, 117.87f, -171f, false, true);
  AUDIO::_0xB2DE3AEBE31150E2(*uParam1, 0);
  func_145(uParam0, *uParam1, "VAL_General_Store", 0);
  func_426(&(uParam1->f_4), 1);
  return 0;
}