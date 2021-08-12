// freemode.ysc @ L1007464
void func_15818(bool bParam0)
{
  if (!Global_2416162.f_1869)
  {
    Global_2416162.f_1868 = 0;
    HUD::ALLOW_SONAR_BLIPS(false);
    Global_2416162.f_1869 = 1;
  }
  if (bParam0)
  {
    HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
    if (!Global_2416162.f_1868)
    {
      HUD::ALLOW_SONAR_BLIPS(true);
      Global_2416162.f_1868 = 1;
    }
  }
  else if (Global_2416162.f_1868)
  {
    HUD::ALLOW_SONAR_BLIPS(false);
    Global_2416162.f_1868 = 0;
  }
}