// am_pi_menu.ysc @ L474827
void func_6628(var uParam0, int iParam1, bool bParam2)
{
  var uVar0;
  int iVar1;
  
  if (!uParam0->f_4)
  {
    if (bParam2)
    {
      iVar1 = Global_262145.f_12885;
      if (iParam1 == 0)
      {
        if (func_422(PLAYER::PLAYER_ID()))
        {
          iVar1 = Global_262145.f_16488;
        }
      }
      if (func_450())
      {
        func_1079(634375935, iVar1, &uVar0, 0, 1, 0);
      }
      else
      {
        MONEY::_NETWORK_SPENT_RENAME_ORGANIZATION(iVar1, 0, 1);
      }
    }
    func_6629();
  }
  else
  {
    uParam0->f_4 = 0;
  }
}