// gb_gunrunning.ysc @ L14813
void func_328(bool bParam0, int iParam1)
{
  if (func_73(bParam0, 4))
  {
    VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
    VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
    VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
    VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 0.2f);
    ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
    VEHICLE::_0x72BECCF4B829522E(iParam1, 0.5f);
    VEHICLE::_0xC0ED6438E6D39BA8(iParam1, 5f, 5f);
    if (bParam0 == 3 && func_59() == 31)
    {
      VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 2, false, false);
    }
  }
}