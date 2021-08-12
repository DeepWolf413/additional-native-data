// am_mp_arcade.ysc @ L353188
void func_5740()
{
  int iVar0;
  
  iVar0 = func_21(8835, -1, 0);
  MONEY::_0xD29334ED1A256DBF(iVar0, 1, iVar0, 0, 0);
  func_5741(iVar0);
  func_187(8835, 0, -1, 1, 0);
  func_5735(0);
  AUDIO::PLAY_SOUND_FRONTEND(-1, "WEAPON_PURCHASE", "HUD_AMMO_SHOP_SOUNDSET", true);
  func_4669(1553815378, 10, 0);
}