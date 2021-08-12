// marston6.ysc @ L72323
void func_1930(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
  {
    VEHICLE::_0xA72B1BF3857B94D7(*uParam0, 1);
    VEHICLE::_0x787E43477746876F(*uParam0);
    VEHICLE::SET_TRAIN_CRUISE_SPEED(*uParam0, fParam1);
    VEHICLE::SET_VEHICLE_HANDBRAKE(*uParam0, false);
    VEHICLE::_0x4182C037AA1F0091(*uParam0, iParam2);
    VEHICLE::_0xDD100CE1EBBF37E3(*uParam0, iParam3);
    VEHICLE::_0xDC69F6913CCA0B99(*uParam0, iParam4);
    VEHICLE::_0x1A861F899EBBE17C(*uParam0, iParam5);
  }
}