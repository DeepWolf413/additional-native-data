// abigail2_1.ysc @ L25439
void func_434(int* iParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
    {
      return;
    }
    if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
    {
      return;
    }
    if (bParam1)
    {
      ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
    }
    else
    {
      if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
      {
      }
      PED::DELETE_PED(iParam0);
    }
  }
}