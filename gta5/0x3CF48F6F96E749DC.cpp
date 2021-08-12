// am_mp_arcade_claw_crane.ysc @ L78444
void func_495(int* iParam0, int iParam1)
{
  struct<3> Var0;
  
  if (!CAM::DOES_CAM_EXIST(iParam0->f_39))
  {
    iParam0->f_39 = CAM::CREATE_CAMERA(26379945, true);
    iParam0->f_29 = 0f;
    iParam0->f_30 = 0f;
    iParam0->f_31 = 0f;
    iParam0->f_32 = 0f;
    Var0 = { 0.8808f, -0.5966f, 0.5838f };
    Var0 = { Var0 * Vector(1.15f, 1.15f, 1.15f) };
    iParam0->f_44 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, Var0) };
    iParam0->f_41 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0.1376f, 0.4819f, 0.4162f) };
    iParam0->f_28 = 0.1f;
    CAM::SET_CAM_COORD(iParam0->f_39, iParam0->f_44);
    CAM::POINT_CAM_AT_COORD(iParam0->f_39, iParam0->f_41);
    CAM::SET_CAM_FOV(iParam0->f_39, 35.928f);
    CAM::SHAKE_CAM(iParam0->f_39, "HAND_SHAKE", iParam0->f_28);
    CAM::SET_USE_HI_DOF();
    CAM::SET_CAM_DOF_PLANES(iParam0->f_39, 0f, 0f, 1.645f, 2.07f);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
}