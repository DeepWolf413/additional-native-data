// short_update.ysc @ L994
void func_27()
{
  bool bVar0;
  bool bVar1;
  bool bVar2;

  MISC::_0x0A487CC74A517FB5(true);
  func_202();
  func_203();
  if (!func_204())
  {
    func_205(0);
    Global_1898068.f_4 = 0;
    return;
  }
  bVar0 = func_206();
  bVar1 = func_207();
  bVar2 = ((Global_1898068.f_4 || bVar0) && Global_1898068.f_3);
  if (bVar2 && !bVar1)
  {
    PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
    PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
  }
  if ((UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")) || bVar2) || bVar1)
  {
    if (bVar0)
    {
      func_208(0);
    }
    func_209();
  }
}