// shop_controller.ysc @ L151198
void func_983()
{
  if (!func_150(7323, -1, -1))
  {
    if (func_1393())
    {
      NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_550(Global_102280));
    }
    MONEY::_NETWORK_EARN_FROM_RDR_BONUS(Global_262145.f_23824, joaat("weapon_stone_hatchet"));
    func_984(0, PLAYER::PLAYER_PED_ID(), "HEADSHNORP", -1859646258, 1463643130, Global_262145.f_23825, 1, -1, 0, 0, 0);
  }
  if (func_1393())
  {
    func_542(Global_102280);
  }
  func_616(7323, 1, -1, 1);
}