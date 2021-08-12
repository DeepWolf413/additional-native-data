// hunting_zone_bear_legendary.ysc @ L1035
void func_33(var uParam0)
{
  if (uParam0->f_680)
  {
    AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
    uParam0->f_680 = 0;
  }
  if (uParam0->f_614 > 0)
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
    {
      AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, false, true);
    }
  }
}