// abigail2_1.ysc @ L64029
void func_1736(int* iParam0, bool bParam1)
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
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
  }
  else
  {
    func_2106(iParam0);
    VEHICLE::DELETE_VEHICLE(iParam0);
  }
}