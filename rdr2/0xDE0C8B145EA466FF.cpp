// industry3.ysc @ L55812
void func_1401()
{
  int iVar0;
  int iVar1;

  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_64, ENTITY::GET_ENTITY_COORDS(Local_1571[0 /*10*/], true, false), &iVar0);
  if (!func_169(iLocal_1716, 16))
  {
    iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(2552.205f, -1170.773f, 52.6838f, joaat("NEW_TAILOR01_INT_MAIN"));
    if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_1571[0 /*10*/]) != iVar1 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iVar1)
    {
      Local_4437.f_3 = 1;
      func_1395(Global_35, Local_1571[0 /*10*/], &Local_4437, -1, 1, 0);
      TASK::_0xDE0C8B145EA466FF(Local_1571[0 /*10*/], -1f, -1f, 1.91986f, -1082130432 /* Float: -1f */, 1f);
      func_432(&iLocal_1716, 16);
    }
  }
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_64, Global_36, &iVar0);
  if (iVar0 >= 55 && iVar0 <= 63)
  {
    if (!func_169(iLocal_1716, 256))
    {
      TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_64, 1, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
      func_432(&iLocal_1716, 256);
    }
  }
  else if (func_169(iLocal_1716, 256))
  {
    TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_64, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
    func_471(&iLocal_1716, 256);
  }
}