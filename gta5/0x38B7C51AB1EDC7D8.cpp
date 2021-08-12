// fm_bj_race_controler.ysc @ L321541
void func_4472()
{
  bool bVar0;
  bool bVar1;
  int iVar2;
  
  if (func_274())
  {
    bVar0 = false;
    while (bVar0 < 32)
    {
      bVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
      iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
      if (func_765(iVar2))
      {
        NETWORK::_0x38B7C51AB1EDC7D8(iVar2, true);
      }
      bVar0++;
    }
  }
}