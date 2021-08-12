// beat_drunk_dueler.ysc @ L33433
void func_1014(var uParam0)
{
  if (!func_163(uParam0, 1048576))
  {
    if (PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID()) > 0.5f)
    {
      func_176(&(uParam0->f_38));
      uParam0->f_6 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
      func_512(uParam0, 1048576);
    }
  }
}