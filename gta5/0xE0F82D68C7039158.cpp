// am_mp_nightclub.ysc @ L312741
void func_5230(int* iParam0)
{
  int iVar0;
  
  if (func_246())
  {
    if (!MISC::IS_BIT_SET(*iParam0, 7))
    {
      iParam0->f_1 = 1;
      MISC::SET_BIT(iParam0, 7);
    }
  }
  else
  {
    iVar0 = func_131(7211, -1, 0);
    func_201(7211, 0, -1, 1, 0);
    Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_324.f_5 = 0;
    MONEY::_0xE0F82D68C7039158(iVar0);
    AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", true);
    func_4(-1198637438, 10, 0);
  }
  func_5231(iParam0, 1);
}