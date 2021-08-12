// map_app_event_handler.ysc @ L2246
int func_70(int iParam0)
{
  if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
  {
    return NETWORK::_NETWORK_GET_RANK();
  }
  return Global_1140157[iParam0 /*19*/];
}