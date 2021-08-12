// abigail2_1.ysc @ L58048
void func_1536(bool bParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
  {
    return;
  }
  if (bParam0)
  {
    PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
  }
  else
  {
    PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
    PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
  }
}