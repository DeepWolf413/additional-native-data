// fm_mission_controller.ysc @ L639407
void func_10523(bool bParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, float fParam18, float fParam19)
{
  if (bParam17 > -1)
  {
    GRAPHICS::_DRAW_SPRITE_POLY_2(Param1, Param7, Param4, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam16, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam16, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam17, "Deadline", "Deadline_Trail_01", fParam18, 1f, 1f, fParam18, 0f, 1f, fParam19, 1f, 1f);
    GRAPHICS::_DRAW_SPRITE_POLY_2(Param7, Param10, Param4, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam16, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam17, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam17, "Deadline", "Deadline_Trail_01", fParam18, 0f, 1f, fParam19, 0f, 1f, fParam19, 1f, 1f);
    if (bParam0)
    {
      GRAPHICS::_DRAW_SPRITE_POLY_2(Param1 + Vector(0f, fLocal_49985, fLocal_49985), Param1 + Vector(0f, fLocal_49985, -fLocal_49985), Param4 + Vector(0f, -fLocal_49985, fLocal_49985), IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam16, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam16, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam17, "Deadline", "Deadline_Trail_01", fParam18, 0.55f, 1f, fParam18, 0.5f, 1f, fParam19, 0.55f, 1f);
      GRAPHICS::_DRAW_SPRITE_POLY_2(Param1 + Vector(0f, fLocal_49985, fLocal_49985), Param4 + Vector(0f, -fLocal_49985, -fLocal_49985), Param4 + Vector(0f, -fLocal_49985, fLocal_49985), IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam16, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam17, IntToFloat(iParam13), IntToFloat(iParam14), IntToFloat(iParam15), bParam17, "Deadline", "Deadline_Trail_01", fParam18, 0.5f, 1f, fParam19, 0.5f, 1f, fParam19, 0.55f, 1f);
    }
  }
  else
  {
    GRAPHICS::_DRAW_SPRITE_POLY(Param1, Param7, Param4, iParam13, iParam14, iParam15, bParam16, "Deadline", "Deadline_Trail_01", 0f, 1f, 1f, 0f, 0f, 1f, 1f, 1f, 1f);
    GRAPHICS::_DRAW_SPRITE_POLY(Param7, Param10, Param4, iParam13, iParam14, iParam15, bParam16, "Deadline", "Deadline_Trail_01", 0f, 0f, 1f, 1f, 0f, 1f, 1f, 1f, 1f);
  }
  if (!Global_1312809)
  {
    if (CAM::DOES_CAM_EXIST(Global_2518589))
    {
      if ((CAM::_0x705A276EBFF3133D() || CAM::_0x3044240D2E0FA842()) || iLocal_49999)
      {
        GRAPHICS::DRAW_LINE(Param1, Param4, iParam13, iParam14, iParam15, bParam16);
      }
    }
  }
}