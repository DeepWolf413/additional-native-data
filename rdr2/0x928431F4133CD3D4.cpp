// rcm_native2.ysc @ L5815
bool func_217()
{
  struct<7> Var0;

  if (func_219(Global_35, iLocal_65, 1, 0) || !func_219(Global_35, iLocal_39, 1, 0))
  {
    func_521(iLocal_43, &Var0);
    if ((MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, joaat("WEAPON_BOW"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, joaat("WEAPON_BOW_IMPROVED"), false))
    {
      return true;
    }
    if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_64))
    {
      iLocal_64 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NTV2_WindowFail");
      VOLUME::_0x39816F6F94F385AD(iLocal_64, 500.715f, 672.815f, 121.705f, 0f, 0f, -5f, 2f, 2f, 2f);
      VOLUME::_0x39816F6F94F385AD(iLocal_64, 495.355f, 669.37f, 121.585f, 0f, 0f, -5f, 4.8f, 2f, 2.5f);
    }
    else if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_64, Global_36))
    {
      return true;
    }
  }
  return false;
}