// chinese1.ysc @ L101352
void func_540()
{
  int iVar0;
  
  if (!iLocal_2392)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1389.11f, 3600.43f, 39.51f, 2f, joaat("v_ret_ml_win5"), true, false, true);
    }
    PHYSICS::BREAK_ENTITY_GLASS(iVar0, 1388.929f, 3600.903f, 40f, 1f, 0f, 1f, 0f, 1100f, 1, true);
    ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
    iLocal_2392 = 1;
  }
}