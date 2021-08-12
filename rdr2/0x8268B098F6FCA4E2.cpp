// av_wagon_music.ysc @ L1796
bool func_28(var uParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_453))
  {
    VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_453, iLocal_44, false);
    VEHICLE::_SET_VEHICLE_TINT(uParam0->f_453, 0);
    PROPSET::_0xD80FAF919A2E56EA(uParam0->f_453, iLocal_43);
  }
  return true;
}