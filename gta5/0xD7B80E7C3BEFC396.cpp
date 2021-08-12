// business_battles.ysc @ L101099
void func_719(bool bParam0, int iParam1)
{
  VEHICLE::_0xDBC631F109350B8C(iParam1, true);
  VEHICLE::_0x2311DD7159F00582(iParam1, true);
  VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, true);
  switch (ENTITY::GET_ENTITY_MODEL(iParam1))
  {
    case joaat("pounder2"):
      VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
      VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 0.125f);
      VEHICLE::SET_VEHICLE_COLOURS(iParam1, 112, 0);
      break;
  }
  VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
  ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
}