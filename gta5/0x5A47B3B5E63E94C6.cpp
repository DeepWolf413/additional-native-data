// am_mp_arcade.ysc @ L352777
int func_5721(var uParam0, int iParam1, int iParam2)
{
  if (!func_5715(iParam1))
  {
    return 1;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iParam1]))
  {
    return 1;
  }
  if (ENTITY::GET_ENTITY_ALPHA(uParam0->f_3[iParam1]) >= 255)
  {
    return 1;
  }
  ENTITY::SET_ENTITY_ALPHA(uParam0->f_3[iParam1], iParam2, false);
  if (iParam2 >= 255)
  {
    return 1;
  }
  return 0;
}