// abigail2_1.ysc @ L31693
void func_661()
{
  bool bVar0;

  bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
  if (!bVar0)
  {
    if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
    {
      func_1144(0);
      UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
    }
    return;
  }
  if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
  {
    return;
  }
  if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
  {
    return;
  }
  if (!func_319(Global_1835011[4 /*74*/].f_1, 1))
  {
    return;
  }
  UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
  func_1144(1);
}