// maintransition.ysc @ L144534
void func_1566(int iParam0)
{
  if (iLocal_19 == 1 || iParam0)
  {
    if (MISC::IS_PC_VERSION())
    {
      HUD::_SET_MOUSE_CURSOR_VISIBLE_IN_MENUS(false);
      iLocal_19 = 0;
    }
  }
}