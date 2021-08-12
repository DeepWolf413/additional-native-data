// celebrations.ysc @ L342296
void func_5146()
{
  MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
  Global_2453009.f_830 = 1;
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
  if (func_5149())
  {
    Global_2453903.f_3478.f_34 = 1;
  }
  func_5148(&Local_266);
  if (Global_2453903.f_3478.f_52 != 22 && Global_2453903.f_3478.f_52 != 23)
  {
    Global_2453903.f_3478.f_330 = 1;
  }
  if (Global_2453903.f_3478.f_52 == 23)
  {
    Global_2453903.f_3478.f_22 = 1;
  }
  if (!func_59(PLAYER::PLAYER_ID(), 0) && !MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 22))
  {
    func_4939(0, 0);
  }
  if (func_5135() && !func_5134())
  {
    func_5147();
  }
  if (Global_2453903.f_3478.f_32)
  {
    STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
  }
  func_2(1);
  func_5137(0);
}