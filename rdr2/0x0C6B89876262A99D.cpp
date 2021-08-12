// act_bankrobbery01.ysc @ L38759
void func_1144(var uParam0, int iParam1)
{
  func_646(uParam0->f_40[iParam1], 280, 1);
  if (iParam1 != 2)
  {
    PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), uParam0->f_40[iParam1]);
    PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
  }
  func_1563(uParam0->f_40[iParam1]);
}