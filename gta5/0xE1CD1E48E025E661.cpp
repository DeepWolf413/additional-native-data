// abigail1.ysc @ L40729
void func_353(int iParam0)
{
  if (iParam0 == 1)
  {
    HUD::THEFEED_PAUSE();
    MISC::SET_BIT(&(Global_99370.f_20), 3);
  }
  else if (MISC::IS_BIT_SET(Global_99370.f_20, 3))
  {
    HUD::THEFEED_RESUME();
    MISC::CLEAR_BIT(&(Global_99370.f_20), 3);
  }
}