// am_pi_menu.ysc @ L415233
void func_5950(int iParam0, bool bParam1, int iParam2, var uParam3)
{
  struct<8> Var0;
  
  Var0 = 2051313650;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_3 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(iParam0);
  Var0.f_2 = bParam1;
  Var0.f_4 = uParam3;
  Var0.f_5 = 2;
  Var0.f_7 = iParam2;
  SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_293(1, 1));
}