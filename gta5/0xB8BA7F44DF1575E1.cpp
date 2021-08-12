// am_mp_arcade.ysc @ L357862
void func_5937(var* uParam0)
{
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_6, uParam0->f_9, uParam0->f_14, false, true, 0))
  {
    if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("mp_bed_high", uParam0->f_13, true, 0))
    {
      SCRIPT::REQUEST_SCRIPT("mp_bed_high");
      if (SCRIPT::HAS_SCRIPT_LOADED("mp_bed_high"))
      {
        SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mp_bed_high", uParam0, 16, 1424);
        SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mp_bed_high");
      }
    }
  }
}