// mob5.ysc @ L52205
void func_1254()
{
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2349.992f, -1227.621f, 42.22575f, 2301.207f, -1227.74f, 53.03061f, 22.5f, false, true, 0))
  {
    if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_826, joaat("PLAYER")) != 6)
    {
      PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_826, joaat("PLAYER"));
      PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_825, joaat("PLAYER"));
    }
  }
  else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2349.794f, -1204.761f, 42.22579f, 2301.211f, -1204.803f, 52.96804f, 23f, false, true, 0))
  {
    if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_825, joaat("PLAYER")) != 6)
    {
      PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_825, joaat("PLAYER"));
      PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_826, joaat("PLAYER"));
    }
  }
}