// braithwaites3.ysc @ L40008
void func_929(bool bParam0)
{
  if (bParam0)
  {
    GRAPHICS::SET_TIMECYCLE_MODIFIER("localLights_thirded");
  }
  else
  {
    GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("localLights_thirded", 10f);
  }
}