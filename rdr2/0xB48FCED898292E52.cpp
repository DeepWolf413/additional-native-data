// grays1.ysc @ L65492
void func_1560()
{
  if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_755))
  {
    iLocal_755 = OBJECT::GET_RAYFIRE_MAP_OBJECT(1946.54f, -682.668f, 40.88087f, 5f, "des_gry1_still");
    if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_755))
    {
      if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_755) != 4 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_755) != 5)
      {
        OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_755, 4);
      }
    }
  }
}