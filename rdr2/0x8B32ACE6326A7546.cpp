// ambush_exc_wagon_bomb.ysc @ L3728
void func_140()
{
  if (!func_133(&uLocal_278, 16384))
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[0]))
    {
      if (func_189(Local_15.f_52[0], Global_36, 1) < 80f && OBJECT::IS_OBJECT_VISIBLE(Local_15.f_52[0]))
      {
        func_147(&uLocal_278, 16384);
      }
    }
  }
}