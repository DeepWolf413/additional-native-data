// fm_content_island_heist.ysc @ L34305
void func_1020(int iParam0)
{
  switch (iParam0)
  {
    case 0:
      GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
      GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.3f);
      GRAPHICS::SET_NOISEOVERIDE(true);
      GRAPHICS::SET_NOISINESSOVERIDE(0.3f);
      break;
  }
}