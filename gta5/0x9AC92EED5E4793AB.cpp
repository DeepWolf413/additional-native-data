// am_casino_peds.ysc @ L217891
void func_2134(var uParam0, var uParam1)
{
  func_1447(&(uParam0->f_22.f_94));
  func_2138(0);
  func_2136(uParam0, 1);
  if (uParam0->f_366 != -1 && !func_1212(PLAYER::PLAYER_ID()))
  {
    if (MISC::IS_BIT_SET(Global_1683970.f_11, uParam0->f_366))
    {
      MISC::CLEAR_BIT(&(Global_1683970.f_11), uParam0->f_366);
      if (MISC::IS_BIT_SET(Global_1683970.f_11, uParam0->f_366))
      {
        AUDIO::_0x9AC92EED5E4793AB();
        AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(func_2135());
      }
    }
    uParam0->f_366 = -1;
  }
  Global_1683946 = 0;
}