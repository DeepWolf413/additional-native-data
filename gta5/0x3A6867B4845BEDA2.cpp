// am_mp_arcade_strength_test.ysc @ L85332
void func_701(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
  float fVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  func_171(iParam0, &Var1, &Var4, &fVar0, 1);
  if (!CAM::DOES_CAM_EXIST(Local_164.f_25.f_34))
  {
    Local_164.f_25.f_34 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var1, Var4, fVar0, bParam2, 2);
    CAM::SET_CAM_ACTIVE(Local_164.f_25.f_34, true);
    CAM::RENDER_SCRIPT_CAMS(bParam3, bParam4, iParam1, true, false, 0);
    Local_164.f_25.f_8 = 0;
    if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
    {
      Local_164.f_25.f_8 = 1;
    }
    Local_164.f_25.f_11 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
    Local_164.f_25.f_14 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
    Local_164.f_25.f_5 = CAM::GET_FINAL_RENDERED_CAM_FOV();
    Local_164.f_25.f_6 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
    Local_164.f_25.f_7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
  }
}