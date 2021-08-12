// am_mp_arena_garage.ysc @ L292552
int func_4720(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (!func_4736())
  {
    return 0;
  }
  iVar0 = 100;
  if (func_1450(PLAYER::PLAYER_ID()))
  {
    iVar0 = 10;
  }
  if (func_173())
  {
    func_4721(837955913, iVar0, &iVar1, 0, 1, 0);
    Global_4265506[iVar1 /*85*/].f_66.f_15 = iParam0;
  }
  else
  {
    MONEY::_NETWORK_SPENT_ARENA_JOIN_SPECTATOR(iVar0, iParam0, false, true);
  }
  func_4732(iVar0);
  return 1;
}