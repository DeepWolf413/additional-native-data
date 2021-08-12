// act_bankrobbery01.ysc @ L13094
void func_266(bool bParam0, int iParam1)
{
  if (bParam0)
  {
    if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
    {
      PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, iParam1, true);
    }
  }
  else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iParam1, true);
  }
}