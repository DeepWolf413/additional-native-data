// fm_capture_creator.ysc @ L179081
void func_1484(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, int iParam12, int iParam13, int iParam14, int iParam15)
{
  GRAPHICS::DRAW_POLY(Param3, Param0, Param6, iParam12, iParam13, iParam14, iParam15);
  GRAPHICS::DRAW_POLY(Param9, Param6, Param0, iParam12, iParam13, iParam14, iParam15);
  GRAPHICS::DRAW_POLY(Param6, Param0, Param3, iParam12, iParam13, iParam14, iParam15);
  GRAPHICS::DRAW_POLY(Param0, Param6, Param9, iParam12, iParam13, iParam14, iParam15);
}