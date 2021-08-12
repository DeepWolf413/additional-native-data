// beat_burning_bodies.ysc @ L16477
void func_537(var uParam0)
{
  if (*uParam0 != -1)
  {
    AUDIO::_0x3210BCB36AF7621B(*uParam0);
    AUDIO::RELEASE_SOUND_ID(*uParam0);
    *uParam0 = -1;
  }
}