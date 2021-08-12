// native_son2.ysc @ L53085
bool func_1298()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_353))
  {
    iLocal_353 = VEHICLE::CREATE_VEHICLE(iLocal_29, func_369(4, 8), func_1867(4, 8), true, true, false, false);
    return false;
  }
  else if (!bLocal_402)
  {
    if (!VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_353, 0f))
    {
      return false;
    }
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_353, true);
    VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_353, true);
    ENTITY::SET_ENTITY_INVINCIBLE(iLocal_353, true);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_353, false);
    WEAPON::_0x8A779706DA5CA3DD(iLocal_353, 0, -1);
    WEAPON::_0xBDDA0C290C228159(iLocal_353, joaat("WEAPON_TURRET_CANNON"), 1000);
    ENTITY::SET_ENTITY_HEADING(iLocal_353, func_1867(4, 8));
    bLocal_402 = true;
  }
  return true;
}