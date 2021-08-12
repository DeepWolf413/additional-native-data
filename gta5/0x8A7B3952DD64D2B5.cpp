// am_ferriswheel.ysc @ L6255
void func_117()
{
  int iVar0;
  
  if (func_135(1) >= Global_262145.f_7960 || MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_7960, false, false, true, -1, 0))
  {
    if (func_134())
    {
      func_122(1643659499, Global_262145.f_7960, &iVar0, 0, 1, 0);
      Global_4265506[iVar0 /*85*/].f_1 = 2;
    }
    else
    {
      MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_262145.f_7960, 2, false, true);
    }
    MISC::SET_BIT(&(Local_1406[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 8);
  }
  else if (!MISC::IS_BIT_SET(iLocal_418, 3))
  {
    func_118(0, 31, 5);
    MISC::SET_BIT(&iLocal_418, 3);
  }
}