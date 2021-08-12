// fm_mission_controller_2020.ysc @ L310807
void func_4183(bool bParam0)
{
  if (!func_4186(iParam0))
  {
    return;
  }
  if (func_4219(iParam0))
  {
    OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(func_4227(iParam0), false);
    OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(func_4227(iParam0), false, func_4185(iParam0), false);
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(func_4227(iParam0), 0f, func_4185(iParam0), true);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(func_4227(iParam0), 4, func_4185(iParam0), false);
  }
  if (MISC::IS_BIT_SET(iLocal_21572, iParam0))
  {
    ENTITY::REMOVE_MODEL_SWAP(Global_4718592.f_30650[bParam0 /*47*/], 1f, Global_4718592.f_30650[bParam0 /*47*/].f_3, func_4184(bParam0, -1), false);
  }
  OBJECT::REMOVE_DOOR_FROM_SYSTEM(func_4227(bParam0));
  MISC::CLEAR_BIT(&iLocal_21533, bParam0);
}