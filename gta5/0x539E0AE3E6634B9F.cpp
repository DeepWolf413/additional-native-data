// abigail1.ysc @ L40340
void func_334(int* iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
    {
      ENTITY::DETACH_ENTITY(*iParam0, true, true);
    }
    OBJECT::DELETE_OBJECT(iParam0);
  }
}