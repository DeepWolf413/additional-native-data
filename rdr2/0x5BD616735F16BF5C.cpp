// winter1.ysc @ L101688
int func_2927(int iParam0, int iParam1)
{
  int iVar0;

  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1);
    if (INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      INTERIOR::_0x5BD616735F16BF5C(iParam0, iVar0);
      return 1;
    }
  }
  return 0;
}