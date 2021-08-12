// agency_heist3a.ysc @ L104753
void func_562(var uParam0, struct<3> Param1, bool bParam4, bool bParam5)
{
  if (!PED::IS_PED_INJURED(uParam0->f_3))
  {
    if (bParam4)
    {
      if (CAM::DOES_CAM_EXIST(uParam0->f_4))
      {
        CAM::DESTROY_CAM(uParam0->f_4, false);
      }
      uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
      CAM::SET_CAM_PARAMS(uParam0->f_4, Param1, 0f, 0f, 0f, uParam0->f_51, 0, 1, 1, 2);
      CAM::POINT_CAM_AT_ENTITY(uParam0->f_4, uParam0->f_3, 0f, 0f, 0f, true);
      if (bParam5)
      {
        HUD::DISPLAY_HUD(false);
        HUD::DISPLAY_RADAR(true);
        CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
      }
    }
  }
  uParam0->f_62 = 1;
}