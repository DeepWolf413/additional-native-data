// am_mp_armory_truck.ysc @ L286375
int func_4752(int iParam0, int iParam1, int iParam2)
{
  struct<2> Var0;
  struct<3> Var8;
  
  if (!func_113(iParam0, &Var8))
  {
    return 0;
  }
  if (iParam2 == 0)
  {
    return 0;
  }
  if (!func_4753(iParam2, &Var0))
  {
    return 0;
  }
  if (OBJECT::_SET_TEXTURE_VARIATION_OF_CLOSEST_OBJECT_OF_TYPE(Var8, 10f, Var0.f_1, iParam1))
  {
    return 1;
  }
  return 0;
}