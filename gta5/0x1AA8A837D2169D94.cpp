// fm_content_phantom_car.ysc @ L22719
void func_537(int iParam0, int iParam1)
{
  int iVar0;
  
  if (iParam0 != 0)
  {
    return;
  }
  NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 0);
  iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1) * 5;
  ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, iVar0);
  ENTITY::SET_ENTITY_HEALTH(iParam1, iVar0, 0);
  ENTITY::SET_ENTITY_PROOFS(iParam1, false, true, false, false, false, false, false, false);
  VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
  VEHICLE::SET_VEHICLE_PROVIDES_COVER(iParam1, false);
  VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam1, true);
  VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
  VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(iParam1, false);
  VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(iParam1, true);
  VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, true);
  VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iParam1, false);
  AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam1, false);
}