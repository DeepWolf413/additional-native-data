// business_battles.ysc @ L133135
void func_1186(int iParam0, int iParam1)
{
  if (func_1187(iParam0, 0) != joaat("weapon_unarmed"))
  {
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, func_509(iParam0, func_3718(), func_465(), 0, 0), 3f, false, false);
  }
  ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, Global_1575029);
  ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, Global_1575024);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam1, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
}