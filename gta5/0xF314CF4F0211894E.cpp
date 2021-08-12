// am_armwrestling.ysc @ L123267
void func_1126(int iParam0)
{
  if (iParam0 < 0 || iParam0 >= 2)
  {
    return;
  }
  if (((Global_2510931[iParam0 /*5*/].f_1 == -1 || Global_2510931[iParam0 /*5*/].f_2 == -1) || Global_2510931[iParam0 /*5*/].f_3 == -1) || Global_2510931[iParam0 /*5*/].f_4 == -1)
  {
    return;
  }
  HUD::REPLACE_HUD_COLOUR_WITH_RGBA(Global_2510931[iParam0 /*5*/], Global_2510931[iParam0 /*5*/].f_1, Global_2510931[iParam0 /*5*/].f_2, Global_2510931[iParam0 /*5*/].f_3, Global_2510931[iParam0 /*5*/].f_4);
  Global_2510931[iParam0 /*5*/] = -1;
  Global_2510931[iParam0 /*5*/].f_1 = -1;
  Global_2510931[iParam0 /*5*/].f_2 = -1;
  Global_2510931[iParam0 /*5*/].f_3 = -1;
  Global_2510931[iParam0 /*5*/].f_4 = -1;
}