// am_pi_menu.ysc @ L473821
void func_6583()
{
  if (func_294(PLAYER::PLAYER_ID(), 0))
  {
    func_6584(0, -1);
    PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), 9);
    MISC::SET_BIT(&(Global_2359302.f_69.f_5), 12);
  }
}