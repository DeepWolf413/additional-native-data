// abigail2.ysc @ L34503
int func_214()
{
  if (!Global_262145.f_28376)
  {
    return 0;
  }
  if (!Global_77248)
  {
    return 0;
  }
  if (PLAYER::PLAYER_ID() == func_217())
  {
    return 0;
  }
  if (func_215(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  if (MISC::IS_BIT_SET(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1, 7))
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    return 0;
  }
  return 1;
}