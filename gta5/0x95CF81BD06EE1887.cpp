// am_mp_casino.ysc @ L353913
void func_5884()
{
  func_4882(1, -1);
  if (Local_222.f_1590.f_2 != -1)
  {
    func_1377(&(Local_222.f_1590.f_2));
  }
  if (MISC::IS_BIT_SET(Local_222.f_1, false))
  {
    HUD::REMOVE_MULTIPLAYER_BANK_CASH();
    HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
    MISC::CLEAR_BIT(&(Local_222.f_1), false);
  }
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), true);
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), 2);
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), 3);
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), 4);
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), 5);
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), 6);
  MISC::CLEAR_BIT(&(Local_222.f_1590.f_11), 7);
  MISC::CLEAR_BIT(&(Global_1683970.f_6), true);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
  Local_222.f_1590 = 4;
  Local_222.f_1590.f_9 = 0;
  Local_222.f_1590.f_10 = 0;
  Local_222.f_1590.f_1 = 0;
  func_1082(&(Local_222.f_1590.f_6));
}