// abigail2_1.ysc @ L38903
void func_962(int* iParam0, int iParam1, int iParam2)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    func_1468(iParam0);
    if (iParam2 == 1 && ENTITY::_IS_ENTITY_FROZEN(*iParam0))
    {
      ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
    }
    if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
    {
      ENTITY::DETACH_ENTITY(*iParam0, true, true);
      PHYSICS::ACTIVATE_PHYSICS(*iParam0);
    }
    if (iParam1 == 1)
    {
      OBJECT::DELETE_OBJECT(iParam0);
    }
    else
    {
      ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
    }
  }
}