// abigail2_1.ysc @ L50243
void func_1288(bool bParam0)
{
  if (!NETWORK::NETWORK_IS_IN_SESSION())
  {
    return;
  }
  if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    return;
  }
  NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
  NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}