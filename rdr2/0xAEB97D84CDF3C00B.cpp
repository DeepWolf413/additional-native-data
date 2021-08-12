// mudtown3.ysc @ L56354
int func_1373(var uParam0, int* iParam1)
{
  if (func_400(iParam1->f_4, 1))
  {
    return 1;
  }
  func_1958(-1, 1);
  if (!func_457(Local_14.f_11[0], 0))
  {
    return 0;
  }
  *iParam1 = Local_14.f_11[0];
  PED::SET_PED_NAME_DEBUG(*iParam1, "Foremans Horse");
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
  PED::SET_PED_CONFIG_FLAG(*iParam1, 6, true);
  func_1959(iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), ENTITY::GET_ENTITY_HEADING(*iParam1), 1, 0);
  PED::_0x2EB75FB86C41F026(*iParam1, 3, 0);
  FLOCK::_0xAEB97D84CDF3C00B(*iParam1, 0);
  func_1960(*iParam1);
  func_426(&(iParam1->f_4), 1);
  return 0;
}