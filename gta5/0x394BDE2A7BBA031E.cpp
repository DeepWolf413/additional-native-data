// fm_mission_controller.ysc @ L801374
int func_13505(bool bParam0, int iParam1, int iParam2, int iParam3)
{
  if (MISC::IS_BIT_SET(Global_4718592.f_84792[bParam0 /*703*/].f_333, 25) || !func_488(1))
  {
    return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam2, iParam3);
  }
  else
  {
    return ENTITY::_HAS_ENTITY_CLEAR_LOS_TO_ENTITY_2(iParam1, iParam2, iParam3);
  }
  return 0;
}