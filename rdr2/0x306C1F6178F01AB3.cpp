// beat_locked_safe.ysc @ L1574
void func_37(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  else if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iParam0))
  {
    func_64(iParam0, 1, 1);
  }
}