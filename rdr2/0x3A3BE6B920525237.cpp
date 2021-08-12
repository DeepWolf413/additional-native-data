// rcm_doctors_opinion1.ysc @ L10918
void func_368(int iParam0)
{
  if (!iParam0->f_294)
  {
    if (AUDIO::LOAD_STREAM("ambience_stream", "rdopn_sounds"))
    {
      AUDIO::_0x3A3BE6B920525237("ambience_stream", "rdopn_sounds");
      iParam0->f_294 = 1;
    }
  }
  else if (!iParam0->f_295)
  {
    if (iParam0->f_296 == -1)
    {
      iParam0->f_296 = AUDIO::_0x0556C784FA056628("ambience_stream", "rdopn_sounds");
    }
    if (iParam0->f_205 == 2)
    {
      AUDIO::STOP_STREAM(iParam0->f_296);
      iParam0->f_295 = 1;
    }
  }
}