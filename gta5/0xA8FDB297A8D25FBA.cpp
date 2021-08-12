// celebrations.ysc @ L267040
void func_4407()
{
  if (func_59(PLAYER::PLAYER_ID(), 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 22))
  {
    return;
  }
  if (Global_2453903.f_3478.f_52 == 22)
  {
    func_14(1, 0, 0, 1);
    func_4421(&(Global_2453903.f_3478.f_42), !Global_2453903.f_3478.f_33);
  }
  else if (Global_2453903.f_3478.f_52 == 23)
  {
    func_14(1, 0, 0, 1);
    func_4419(&(Global_2453903.f_3478.f_42));
  }
  else
  {
    SCRIPT::SET_NO_LOADING_SCREEN(true);
    func_4408(Global_2453903.f_3478.f_52, &(Global_2453903.f_3478.f_42), -1, -1);
  }
  func_6();
  func_3(0, 0);
  HUD::THEFEED_FLUSH_QUEUE();
}