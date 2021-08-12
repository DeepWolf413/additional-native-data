// fm_bj_race_controler.ysc @ L22681
void func_426(int iParam0, int* iParam1)
{
  if (MISC::IS_BIT_SET(*iParam1, 8))
  {
    VEHICLE::_SET_TYRE_HEALTH(iParam0, 0, 1000f);
    VEHICLE::_SET_TYRE_HEALTH(iParam0, 1, 1000f);
    MISC::CLEAR_BIT(iParam1, 8);
  }
  if (MISC::IS_BIT_SET(*iParam1, 9))
  {
    VEHICLE::_SET_TYRE_HEALTH(iParam0, 4, 1000f);
    VEHICLE::_SET_TYRE_HEALTH(iParam0, 5, 1000f);
    MISC::CLEAR_BIT(iParam1, 9);
  }
  func_427(iParam1, 3, VEHICLE::_GET_TYRE_HEALTH(iParam0, 0));
  func_427(iParam1, 4, VEHICLE::_GET_TYRE_HEALTH(iParam0, 1));
  func_427(iParam1, 5, VEHICLE::_GET_TYRE_HEALTH(iParam0, 4));
  func_427(iParam1, 6, VEHICLE::_GET_TYRE_HEALTH(iParam0, 5));
}