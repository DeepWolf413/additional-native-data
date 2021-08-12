// am_darts.ysc @ L121337
void func_1013(var uParam0)
{
  if (!HUD::IS_PAUSE_MENU_ACTIVE())
  {
    if (!func_1023(&(uParam0->f_666), 8))
    {
      func_1020(&(uParam0->f_666), 8, 1);
      func_1020(&(uParam0->f_666), 15, 0);
      func_1020(&(uParam0->f_666), 16, 0);
      func_1020(&(uParam0->f_666), 17, 0);
    }
    HUD::CLEAR_SMALL_PRINTS();
    HUD::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
  }
  else if (func_1023(&(uParam0->f_666), 8))
  {
    func_1020(&(uParam0->f_666), 8, 0);
  }
}