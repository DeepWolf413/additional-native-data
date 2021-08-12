// freemode.ysc @ L928852
int func_13877()
{
  if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
  {
    return 0;
  }
  if ((func_13855() || func_13043()) && !PAD::IS_CONTROL_ENABLED(0, 75))
  {
    return 0;
  }
  return 1;
}