// rcm_exconfed11.ysc @ L29435
bool func_913(int iParam0, int iParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
    {
      return false;
    }
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 27, false);
    WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam0, joaat("WEAPON_TURRET_MAXIM"));
    PED::SET_PED_ACCURACY(iParam0, 100);
    PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 27, true);
    PED::SET_PED_FIRING_PATTERN(iParam0, 1575766855);
    WEAPON::_0xA769D753922B031B(iParam0, 0.01f, 0.01f);
    TASK::TASK_VEHICLE_SHOOT_AT_COORD(iParam0, Global_36, 80f);
  }
  return true;
}