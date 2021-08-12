// fm_content_auto_shop_delivery.ysc @ L2238
void func_91(int iParam0, int iParam1)
{
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
  PED::SET_PED_KEEP_TASK(iParam1, true);
  TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
  if (func_33(iParam0, 6))
  {
    PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, true);
  }
  else
  {
    PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
    TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, false);
  }
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
  PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_224.f_38.f_1[iParam0 /*21*/].f_15);
  PED::SET_PED_COMBAT_ABILITY(iParam1, func_97());
  PED::SET_PED_ACCURACY(iParam1, func_96(iParam0));
  PED::SET_PED_SHOOT_RATE(iParam1, func_95());
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
  ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_94());
  ENTITY::SET_ENTITY_HEALTH(iParam1, func_94(), 0);
  PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
  func_92(iParam0, iParam1);
}