// freemode.ysc @ L700281
void func_10145()
{
  bool bVar0;
  
  bVar0 = false;
  func_10146();
  if (MISC::IS_BIT_SET(Global_2544210.f_4659, 9))
  {
    bVar0 = true;
  }
  if (MISC::IS_BIT_SET(Global_2544210.f_4659, 8))
  {
    bVar0 = true;
  }
  if (bVar0 != MISC::IS_BIT_SET(Global_2544210.f_4659, 7))
  {
    if (bVar0)
    {
      MISC::SET_BIT(&(Global_2544210.f_4659), 7);
      HUD::_SET_MINIMAP_SONAR_ENABLED(true);
    }
    else
    {
      MISC::CLEAR_BIT(&(Global_2544210.f_4659), 7);
      HUD::_SET_MINIMAP_SONAR_ENABLED(false);
    }
  }
}