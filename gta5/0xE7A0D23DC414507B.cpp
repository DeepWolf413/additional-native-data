// fm_intro.ysc @ L9344
int func_236(int* iParam0)
{
  if (iParam0->f_6 < 31)
  {
    return AUDIO::GET_MUSIC_PLAYTIME();
  }
  if (iParam0->f_6 < 33)
  {
    return (iParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME());
  }
  return (iParam0->f_28 + AUDIO::GET_MUSIC_PLAYTIME());
}