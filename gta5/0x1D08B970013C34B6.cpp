// am_mp_auto_shop.ysc @ L429737
bool func_6434(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
  struct<3> Var0;
  float fVar3;
  
  Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
  fVar3 = func_4335(func_4336(Var0), func_4336(Param4 - Param0));
  return MISC::ACOS(fVar3) <= fParam7;
}