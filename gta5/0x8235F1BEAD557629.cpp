// gb_smuggler.ysc @ L15296
void func_337(bool bParam0, int iParam1)
{
  if (!func_190(bParam0))
  {
    if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("cargoplane"))
    {
      VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
      VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, 0.2f);
      VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
      VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam1, 30f);
      VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iParam1, 2, false);
      ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1500);
      VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(iParam1, true);
      VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam1, false);
      VEHICLE::SET_VEHICLE_COLOURS(iParam1, 12, 129);
      VEHICLE::_0x8235F1BEAD557629(iParam1, true);
      VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
      VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
    }
    else if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("lazer"))
    {
      VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam1, 30f);
      VEHICLE::_0xC361AA040D6637A8(iParam1, true);
      ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1500);
      VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(iParam1, true);
      VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam1, false);
      VEHICLE::SET_VEHICLE_COLOURS(iParam1, 12, 129);
      VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam1, 0f);
      VEHICLE::CONTROL_LANDING_GEAR(iParam1, 3);
    }
  }
}