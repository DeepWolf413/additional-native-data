// carsteal3.ysc @ L109510
void func_666(int iParam0, struct<3> Param1, float fParam4)
{
  if (*iParam0 == -1)
  {
    *iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
    GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, Param1, fParam4);
  }
}