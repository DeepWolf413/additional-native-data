// agency_heist3b.ysc @ L137246
void func_1058(int iParam0, bool bParam1)
{
  if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
  {
    VEHICLE::_0xC50CE861B55EAB8B(iParam0, bParam1);
  }
  else
  {
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
    VEHICLE::_0xC50CE861B55EAB8B(iParam0, bParam1);
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
  }
}