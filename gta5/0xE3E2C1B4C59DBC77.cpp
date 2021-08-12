// am_mp_armory_aircraft.ysc @ L309274
void func_5050()
{
  Global_1694749 = 0;
  func_5053(0, func_38(Local_1085.f_7));
  func_5053(1, func_37(Local_1085.f_7));
  func_5053(2, func_36(Local_1085.f_7));
  func_5051(Local_1085.f_3, &(Local_1085.f_8), 0, 0);
  func_68();
  func_3207(0);
  AUDIO::START_AUDIO_SCENE("dlc_xm_avenger_interior_scene");
  AUDIO::SET_AMBIENT_ZONE_LIST_STATE("azl_dlc_xm_int_01_avngr_zones", true, false);
  if (func_9(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
    {
      PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
    }
    if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), false))
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, false);
    }
  }
  GRAPHICS::_0xE3E2C1B4C59DBC77(1);
}