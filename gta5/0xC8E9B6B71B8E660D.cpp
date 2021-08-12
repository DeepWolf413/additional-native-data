// fm_deathmatch_controler.ysc @ L519176
void func_8899(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
  }
  if (!bParam4)
  {
    if (!PED::IS_PED_INJURED(iParam2))
    {
      AUDIO::PLAY_SOUND_FRONTEND(-1, "Bomb_Passed", "DLC_AW_PTB_Sounds", false);
    }
  }
  if ((func_411(iParam3) && func_411(iParam2)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam3))
  {
    VEHICLE::_SET_VEHICLE_HANDLING_HASH_FOR_AI(iParam3, -1103972294);
    PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), Global_4456448.f_135270);
    VEHICLE::SET_VEHICLE_MOD_KIT(iParam3, 0);
    if (MISC::IS_BIT_SET(Global_4456448.f_31, 19))
    {
      VEHICLE::SET_VEHICLE_MOD(iParam3, 40, uParam0->f_6754, false);
      HUD::_SET_ABILITY_BAR_VISIBILITY_IN_MULTIPLAYER(false);
      VEHICLE::_SET_VEHICLE_NITRO_ENABLED(iParam3, false, 0f, 0f, 0f, false);
    }
  }
  (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/])->f_25 = uParam0->f_6752;
  MISC::CLEAR_BIT(&(uParam0->f_19), 15);
}