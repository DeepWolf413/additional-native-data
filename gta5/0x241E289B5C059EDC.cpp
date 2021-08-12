// am_mp_auto_shop.ysc @ L35021
void func_372(bool bParam0)
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    bVar1 = iVar0;
    if (bVar1 != PLAYER::PLAYER_ID() && func_6460(bVar1, 1, 1))
    {
      iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
      if (func_319(iVar2))
      {
        if (bParam0)
        {
          NETWORK::SET_ENTITY_LOCALLY_VISIBLE(iVar2);
        }
        else
        {
          NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(iVar2);
        }
      }
    }
    iVar0++;
  }
}