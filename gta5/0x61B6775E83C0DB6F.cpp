// armenian1.ysc @ L53318
void func_509(bool bParam0)
{
  if (bParam0)
  {
    if (!iLocal_2497)
    {
      ENTITY::CREATE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"), true);
      ENTITY::CREATE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"), true);
      ENTITY::CREATE_FORCED_OBJECT(-1208.322f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"), true);
      iLocal_2497 = 1;
    }
  }
  else if (iLocal_2497)
  {
    ENTITY::REMOVE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"));
    ENTITY::REMOVE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"));
    ENTITY::REMOVE_FORCED_OBJECT(-1208.322f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"));
    iLocal_2497 = 0;
  }
}