// grid_arcade_cabinet.ysc @ L12217
void func_396(struct<21> Param0)
{
  func_402(4, Param0);
  func_400(0, -1, 0);
  func_399();
  func_398();
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_621, 201);
  NETWORK::_0xEA8C0DDB10E2822A(&iLocal_822, 5);
  NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_827, 37);
  NETWORK::_0xD6D7478CA62B8D41(&Local_864, 65);
  if (!func_397())
  {
    func_13();
  }
  Local_827[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6 = Param0.f_19;
}