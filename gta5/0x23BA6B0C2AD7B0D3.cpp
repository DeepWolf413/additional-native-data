// fm_capture_creator.ysc @ L179069
void func_1483(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, struct<3> Param12, struct<3> Param15, struct<3> Param18, struct<3> Param21, int iParam24, int iParam25, int iParam26, int iParam27)
{
  GRAPHICS::SET_BACKFACECULLING(false);
  func_1484(Param0, Param3, Param6, Param9, iParam24, iParam25, iParam26, iParam27);
  func_1484(Param3, Param15, Param18, Param6, iParam24, iParam25, iParam26, iParam27);
  func_1484(Param6, Param18, Param21, Param9, iParam24, iParam25, iParam26, iParam27);
  func_1484(Param0, Param9, Param21, Param12, iParam24, iParam25, iParam26, iParam27);
  func_1484(Param0, Param12, Param15, Param3, iParam24, iParam25, iParam26, iParam27);
  func_1484(Param12, Param21, Param18, Param15, iParam24, iParam25, iParam26, iParam27);
  GRAPHICS::SET_BACKFACECULLING(true);
}