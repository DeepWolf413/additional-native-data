// rcm_here_kitty_kitty4.ysc @ L4388
void func_159(var uParam0)
{
  func_394();
  func_395(0);
  PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
  PLAYER::_0xB783F75940B23014(PLAYER::PLAYER_ID(), 0f);
  func_396(&iLocal_792, 1, 1);
  if (uParam0->f_177 == 9)
  {
    func_397("KTTY5_FAIL", 0);
  }
  func_398(1);
  func_392(uParam0, 1, 1, 0);
  HUD::_DISPLAY_HUD_COMPONENT(724769646);
  if (func_6(uParam0->f_172, 8))
  {
    PED::_0x411189E51B8020BA(Global_35, "Cautious");
  }
  STREAMING::REMOVE_PTFX_ASSET();
  if (bLocal_777)
  {
    func_399();
  }
  func_400(vLocal_695, 80f, 5);
  if (func_6(uParam0->f_172, 8))
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  }
}