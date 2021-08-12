// rcm_homerob00.ysc @ L21572
void func_758(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    VEHICLE::_SET_VEHICLE_LIVERY(*iParam0, 0);
    VEHICLE::_SET_VEHICLE_TINT(*iParam0, 0);
    VEHICLE::_SET_VEHICLE_MUD_LEVEL(*iParam0, 0f);
    VEHICLE::_0x8878FF3EEE2868A9(*iParam0, 0f);
    VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 0f);
  }
}