// rcm_abigail31.ysc @ L10612
bool func_319(bool bParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128))
  {
    iLocal_128 = VEHICLE::CREATE_VEHICLE(joaat("ROWBOAT"), func_206(10), func_207(10), true, true, false, false);
    PHYSICS::ACTIVATE_PHYSICS(iLocal_128);
    if (bParam0)
    {
      VEHICLE::SET_BOAT_ANCHOR(iLocal_128, true);
    }
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_128, 1, true);
    VEHICLE::_SET_VEHICLE_TINT(iLocal_128, 0);
    return false;
  }
  AITRANSPORT::_0x4B6C9A43F7D9109B(iLocal_128, 0);
  return true;
}