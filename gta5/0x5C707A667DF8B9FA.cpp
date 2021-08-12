// freemode.ysc @ L935866
void func_14029()
{
  bool bVar0;
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  while (iVar2 < 6)
  {
    bVar0 = Global_1312538[iVar2];
    if (!bVar0 == func_20457())
    {
      if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0))
      {
        bVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
        if (!Global_1312532 == bVar1 && func_17216(bVar0, 0, 1))
        {
          func_14030(bVar1);
        }
      }
    }
    iVar2++;
  }
  NETWORK::NETWORK_SET_CHOICE_MIGRATE_OPTIONS(true, func_20457());
}