// bounty_poster.ysc @ L1012
void func_34(var uParam0, var uParam1)
{
  if (!uParam0->f_2)
  {
    if (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1))
    {
      uParam0->f_1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_95(uParam1), func_96(uParam1->f_2));
    }
    else
    {
      INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_1);
      uParam0->f_2 = 1;
    }
  }
}