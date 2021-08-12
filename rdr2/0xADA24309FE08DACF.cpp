// shop_horse_shop.ysc @ L5667
void func_115(var uParam0)
{
  func_446(uParam0, 8);
  if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
  {
    NETWORK::NETWORK_END_TUTORIAL_SESSION();
  }
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
}