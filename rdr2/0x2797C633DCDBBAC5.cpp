// mob4.ysc @ L70933
void func_1956()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_129))
  {
    if (func_26(&uLocal_1071))
    {
      OBJECT::_SET_OBJECT_BURN_LEVEL(iLocal_129, func_1711((func_1206(&uLocal_1071) / 3.5f), 0f, 1f), true);
      if (func_1206(&uLocal_1071) >= 3.5f)
      {
        func_539(&uLocal_1071);
      }
    }
  }
}