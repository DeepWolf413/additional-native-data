// abigail2_1.ysc @ L71831
void func_2074(int* iParam0, bool bParam1, bool bParam2)
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
  if (bParam1)
  {
    if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
    {
      ENTITY::DETACH_ENTITY(*iParam0, true, true);
    }
  }
  if (bParam2)
  {
    OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
  }
  else
  {
    ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
  }
}