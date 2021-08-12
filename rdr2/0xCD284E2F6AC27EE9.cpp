// guama1.ysc @ L24580
bool func_408(var uParam0)
{
  Global_1897952.f_36 = 0;
  func_797();
  HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
  if (!func_798(uParam0))
  {
    return false;
  }
  STREAMING::SET_MAPDATACULLBOX_ENABLED("Guarma_Boat", true);
  uLocal_26 = GRAPHICS::_0xFA50F79257745E74(688.195f, -5521.027f, 41.47f, 200f, 1, -1, 0);
  if (func_799())
  {
    func_800(1);
    if (func_802(func_801()))
    {
      func_804(func_803(func_801()), Global_35, -1, 1);
      func_805();
    }
  }
  CLOCK::SET_CLOCK_TIME(0, 0, 0);
  MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  WATER::_0xC63540AEF8384732(0f, 50.04f, 1, 1.15f, 1.28f, -1082130432 /* Float: -1f */, 1.86f, 8.1f, 1);
  GRAPHICS::_0xCD284E2F6AC27EE9(1);
  STREAMING::_0xF01D21DF39554115(0);
  func_806();
  INVENTORY::_0x766315A564594401(func_167(0), joaat("DOCUMENT_PLAYER_JOURNAL"), 0);
  return true;
}