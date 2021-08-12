// event_area_appleseed_stg1.ysc @ L16669
void func_459(int iParam0)
{
  vector3 vVar0;
  float fVar3;

  vVar0 = { func_849(*iParam0) };
  fVar3 = func_850(*iParam0);
  uLocal_1026[*iParam0] = TASK::CREATE_SCENARIO_POINT(func_683(), vVar0, fVar3, 0, 0, 0);
  TASK::_0xE69FDA40AAC3EFC0(uLocal_1026[*iParam0], 0);
  TASK::_0xA7479FB665361EDB(uLocal_1026[*iParam0], 0);
  TASK::_SET_SCENARIO_POINT_FLAG(uLocal_1026[*iParam0], 19, true);
  iLocal_736[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
  POPULATION::_0x18262CAFEBB5FBE1(iLocal_736[*iParam0], 534496, 0, 0, -1, -1, 0);
  POPULATION::_0xB56D41A694E42E86(iLocal_736[*iParam0], 534496, 0, 0, -1, -1, 0);
  if (!func_851(&(uLocal_2311[*iParam0])))
  {
    uLocal_2311[*iParam0] = GRAPHICS::_0xFA50F79257745E74(vVar0, 3f, 1, 36, 0);
  }
}