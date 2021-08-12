// gb_smuggler.ysc @ L15329
void func_338(bool bParam0, int iParam1)
{
  if (!func_190(bParam0))
  {
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("tug"))
    {
      VEHICLE::SET_BOAT_ANCHOR(iParam1, true);
      VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
      VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 0.2f);
      VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
      VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(iParam1, true);
    }
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("submersible2"))
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, true);
      VEHICLE::_0xDBC631F109350B8C(iParam1, true);
    }
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("cargobob2"))
    {
      VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
      VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
      VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 1.2f);
      VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, true);
    }
  }
}