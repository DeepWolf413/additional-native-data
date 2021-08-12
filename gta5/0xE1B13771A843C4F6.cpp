// pausemenu_multiplayer.ysc @ L13377
void func_368()
{
  int iVar0;
  struct<13> Var1;
  int iVar14;
  var uVar15;
  
  iVar0 = func_149(20);
  Var1 = { func_156(PLAYER::PLAYER_ID()) };
  if (!MONEY::_NETWORK_CAN_SPEND_MONEY_2(iVar0, false, true, false, &iVar14, -1, 0))
  {
    iVar0 = (iVar0 - iVar14);
  }
  if (iVar0 > 0)
  {
    func_369(-iVar0, 1, 1, 0f);
    if (func_155())
    {
      func_137(-180141073, iVar0, &uVar15, 0, 1, 0);
    }
    else
    {
      MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(iVar0, &Var1, false, true);
    }
  }
}