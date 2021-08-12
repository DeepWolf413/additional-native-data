// freemode.ysc @ L843784
void func_12750(var uParam0)
{
  if (Global_2518654)
  {
    if ((((((((((func_12752() && !CAM::IS_SCREEN_FADED_OUT()) && !func_1681()) && !func_20455()) && !func_574()) && func_17216(PLAYER::PLAYER_ID(), 1, 1)) && func_17135()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_1324()) && !Global_1312810) && !Global_1669334)
    {
      if (Global_2518659 == 0)
      {
        Global_2518659 = 1;
      }
      HUD::_0x170F541E1CADD1DE(true);
      HUD::_SET_PLAYER_CASH_CHANGE(false, (Global_262145.f_23750 * Global_2518659));
      HUD::_0x170F541E1CADD1DE(false);
      func_799("WS_RFUND", -1);
      MISC::SET_BIT(&(uParam0->f_1), 9);
      Global_2518659 = 0;
      Global_2518654 = 0;
    }
  }
  func_12751(uParam0);
}