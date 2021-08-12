// property_use_core.ysc @ L17524
void func_643(var uParam0, int iParam1)
{
  uParam0->f_2031.f_72 = iParam1;
  if (uParam0->f_2031.f_72 >= uParam0->f_2031.f_73)
  {
    uParam0->f_2031.f_72 = 0;
  }
  else if (uParam0->f_2031.f_72 < 0)
  {
    uParam0->f_2031.f_72 = (uParam0->f_2031.f_73 - 1);
  }
  DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_50, 1731278865, uParam0->f_2031.f_72);
}