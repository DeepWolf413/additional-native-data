// armenian1.ysc @ L41035
void func_340(int* iParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
    {
      ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, true);
      if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
      {
        ENTITY::DETACH_ENTITY(*iParam0, true, true);
      }
    }
    if (bParam1)
    {
      VEHICLE::DELETE_VEHICLE(iParam0);
    }
    else
    {
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
    }
  }
}