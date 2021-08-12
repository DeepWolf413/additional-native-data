// fm_content_auto_shop_delivery.ysc @ L2366
void func_98(int iParam0, int iParam1)
{
  PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
  PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
  PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
  PED::SET_PED_KEEP_TASK(iParam1, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, true);
  PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
  PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, true);
  PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
  PED::SET_COMBAT_FLOAT(iParam1, 27, 0f);
  PED::SET_PED_ACCURACY(iParam1, func_96(iParam0));
  PED::SET_PED_SHOOT_RATE(iParam1, func_95());
  ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_94());
  ENTITY::SET_ENTITY_HEALTH(iParam1, func_94(), 0);
  PED::SET_PED_COMBAT_ABILITY(iParam1, func_97());
  if (func_99(iParam0))
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, true);
  }
}