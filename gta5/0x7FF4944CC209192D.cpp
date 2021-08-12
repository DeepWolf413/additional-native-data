// ambient_ufos.ysc @ L358
void func_6()
{
  if (bLocal_104)
  {
    if (MISC::GET_GAME_TIMER() > iLocal_99)
    {
      if (iLocal_101 != -1)
      {
        func_4(&iLocal_101);
        iLocal_99 = (MISC::GET_GAME_TIMER() + iLocal_98);
      }
      else
      {
        iLocal_101 = AUDIO::GET_SOUND_ID();
        AUDIO::PLAY_SOUND(iLocal_101, "ent_amb_elec_crackle", 0, false, 0, true);
        iLocal_99 = (MISC::GET_GAME_TIMER() + iLocal_96);
      }
    }
  }
}