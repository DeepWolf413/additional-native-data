// fm_mission_controller.ysc @ L317516
void func_4366()
{
  if (MISC::ARE_STRINGS_EQUAL(sLocal_16440, "MPH_PAC_FIN_MCS1") && MISC::IS_BIT_SET(bLocal_14844, 25))
  {
    func_4367(0);
  }
  if (MISC::ARE_STRINGS_EQUAL(sLocal_16440, "MPH_NAR_FIN_EXT"))
  {
    MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
    GRAPHICS::_0x649C97D52332341A(1);
  }
  if (MISC::ARE_STRINGS_EQUAL(sLocal_16440, "MPH_PAC_WIT_MCS1"))
  {
    MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
    HUD::DISPLAY_HUD(true);
  }
  if (MISC::ARE_STRINGS_EQUAL(sLocal_16440, "MPH_PAC_FIN_EXT"))
  {
    GRAPHICS::_0xA46B73FAA3460AE1(false);
    MISC::CLEAR_BIT(&bLocal_14842, 8);
  }
  if (INTERIOR::IS_VALID_INTERIOR(iLocal_14791))
  {
    INTERIOR::UNPIN_INTERIOR(iLocal_14791);
  }
  if (MISC::ARE_STRINGS_EQUAL(sLocal_16440, "MPH_PRI_BUS_EXT"))
  {
    AUDIO::DISTANT_COP_CAR_SIRENS(true);
  }
}