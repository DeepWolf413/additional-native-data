// beat_drunk_dueler.ysc @ L3990
void func_66(var uParam0, var uParam1)
{
  func_155();
  if (uParam1->f_57 != 3)
  {
    if (uParam1->f_57 == 4)
    {
      CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
    }
    else
    {
      CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
    }
  }
  if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
  {
    PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
  }
  if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
  {
    PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 6, 0);
    PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
  }
  MISC::SET_TIME_SCALE(1f);
}