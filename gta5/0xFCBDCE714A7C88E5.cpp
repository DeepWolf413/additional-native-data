// agency_heist3a.ysc @ L121667
void func_848()
{
  if (AUDIO::HAS_SOUND_FINISHED(iLocal_4935))
  {
    AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_4935, "Gasmask", PLAYER::PLAYER_PED_ID(), "FBI_HEIST_RAID", false, 0);
  }
}