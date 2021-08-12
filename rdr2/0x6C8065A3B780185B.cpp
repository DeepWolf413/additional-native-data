// ambush_bnd_cliff1.ysc @ L3184
void func_126(int iParam0, char* sParam1, bool bParam2)
{
  if (bParam2 || func_61(iParam0, 0, 0))
  {
    DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
    AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
  }
}