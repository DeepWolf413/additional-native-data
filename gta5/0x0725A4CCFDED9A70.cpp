// agency_heist3b.ysc @ L115896
void func_785(int* iParam0, bool bParam1, bool bParam2)
{
  MISC::CLEAR_BIT(iParam0, 0);
  MISC::SET_BIT(iParam0, 12);
  GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
  if (bParam2)
  {
    if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
    {
      WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
    }
  }
  if (MISC::IS_MINIGAME_IN_PROGRESS())
  {
    MISC::SET_MINIGAME_IN_PROGRESS(false);
  }
  HUD::CLEAR_HELP(true);
  if (bParam1)
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
  }
  CAM::DESTROY_CAM(iLocal_69, false);
  func_51(0);
  func_786();
  GRAPHICS::_0x9B079E5221D984D3(false);
  func_48(iParam0, 1, 1, 0);
  func_49(0, 1, 1, 0);
}