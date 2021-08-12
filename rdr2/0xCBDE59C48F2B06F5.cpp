// odriscolls3.ysc @ L17545
void func_168(bool bParam0)
{
  if (bParam0 && func_165(120))
  {
    return;
  }
  if (!bParam0 && !func_165(120))
  {
    return;
  }
  if (bParam0)
  {
    PLAYER::_0x4DBC4873707E8FD6(PLAYER::PLAYER_ID(), 0.05f, 0.05f, 0.05f);
    PED::_0xCBDE59C48F2B06F5(Global_35, joaat("WEAPON_THROWN_THROWING_KNIVES"), 0f);
    func_456(120);
  }
  else
  {
    PLAYER::_0xCEDC16930526F728(PLAYER::PLAYER_ID());
    PED::_0x6A190B94C2541A99(Global_35);
    func_176(120);
  }
}