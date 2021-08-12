// abigail2_1.ysc @ L50007
void func_1275(int* iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return;
  }
  if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
  {
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
  }
  if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
  {
    ENTITY::DETACH_ENTITY(*iParam0, true, true);
  }
  OBJECT::DELETE_OBJECT(iParam0);
}