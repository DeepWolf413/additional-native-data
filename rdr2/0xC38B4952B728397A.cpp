// guama1.ysc @ L49254
bool func_1219()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
  {
    iLocal_32 = VEHICLE::CREATE_VEHICLE(iLocal_25, 688.195f, -5521.027f, 41.47f, 0f, true, true, false, false);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_32, true);
    ENTITY::SET_ENTITY_INVINCIBLE(iLocal_32, true);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_32, false);
    GRAPHICS::_0xC38B4952B728397A(iLocal_32, 1);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_32, 1, true);
    PROPSET::_0xD80FAF919A2E56EA(iLocal_32, iLocal_21);
    iLocal_39 = PROPSET::_CREATE_PROPSET_3(iLocal_20, vLocal_17, iLocal_32, 0f, false, 1, false);
    return false;
  }
  return true;
}