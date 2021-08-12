// am_hunt_the_beast.ysc @ L159709
void func_1565()
{
  CAM::SET_WIDESCREEN_BORDERS(false, -1);
  func_1566();
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
    if (!Global_77248)
    {
      PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
      PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
    }
  }
  Global_101483 = 0;
  func_585(0, 1, 1, 0, 0, 0, 0);
}