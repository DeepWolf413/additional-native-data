// mob4.ysc @ L85539
float func_2534(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0))
    {
      return OBJECT::_0xFA3B61EC249B4674(iParam0);
    }
  }
  return 0f;
}