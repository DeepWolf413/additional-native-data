// ambush_exc_hide_cover.ysc @ L7786
void func_283(int iParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    MAP::ALLOW_SONAR_BLIPS(true);
    MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
  }
  MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}