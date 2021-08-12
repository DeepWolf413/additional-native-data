// director_mode.ysc @ L15678
void func_190()
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    func_192();
    if (func_191())
    {
      PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
    }
  }
}