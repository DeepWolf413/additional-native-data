// am_armwrestling.ysc @ L43523
void func_250()
{
  int iVar0;
  
  NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
  iVar0 = 0;
  while (iVar0 < 32)
  {
    if (func_24(iVar0, 0, 1))
    {
      NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, true);
    }
    iVar0++;
  }
}