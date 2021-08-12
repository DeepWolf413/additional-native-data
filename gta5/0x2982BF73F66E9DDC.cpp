// am_mp_arena_garage.ysc @ L293716
void func_4758(var uParam0, int iParam1, int iParam2)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_19)))
  {
    GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, &(uParam0->f_19), true);
  }
  GRAPHICS::SET_TV_AUDIO_FRONTEND(true);
  GRAPHICS::SET_TV_VOLUME(-100f);
  GRAPHICS::SET_TV_CHANNEL(0);
  uParam0->f_10 = 1;
  uParam0->f_11 = 0;
  if (iParam1 || iParam2)
  {
    func_165(&(uParam0->f_33), 0, 0);
  }
}