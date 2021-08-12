// ob_vend1.ysc @ L67266
int func_343(int iParam0)
{
  if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_RecAreaRm") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_GunSHopRm"))
  {
    if (OBJECT::IS_OBJECT_NEAR_POINT(joaat("v_ret_gc_chair02"), Local_72, 1f))
    {
      return 1;
    }
  }
  return 0;
}