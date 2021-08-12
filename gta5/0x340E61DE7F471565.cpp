// appmpjoblistnew.ysc @ L306823
void func_4749()
{
  if (Global_2391038 == 0)
  {
    func_4754();
    return;
  }
  if (!func_49(PLAYER::PLAYER_ID(), 1, 1))
  {
    func_4754();
  }
  if (func_1892(PLAYER::PLAYER_ID(), 1, 0))
  {
    func_4754();
    return;
  }
  if (!func_1892(PLAYER::PLAYER_ID(), 1, 0))
  {
    PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), Global_2391038, false);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
    if (Global_2391039 != 0)
    {
      func_4751(Global_2391039, 8, 3, 0);
    }
    func_4750("RESTORE_WANTED", Global_2391039, -1);
    func_4754();
  }
}