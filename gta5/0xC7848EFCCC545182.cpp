// am_mp_property_int.ysc @ L534518
void func_8247()
{
  struct<3> Var0;
  struct<3> Var3;
  struct<3> Var6;
  struct<3> Var9;
  
  func_8242();
  if (ENTITY::DOES_ENTITY_EXIST(Local_10088.f_11))
  {
    MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_10088.f_11), &Var3, &Var6);
    Var0 = { 0f, ((Var6.f_1 - Var3.f_1) * -0.5f), ((Var6.f_2 - Var3.f_2) * 0.5f) };
    Var0 = { Var0 + Local_10088.f_22 };
    CAM::ATTACH_CAM_TO_ENTITY(Local_10088.f_80[0], Local_10088.f_11, Var0, true);
    Local_10088.f_19[0] = 1;
    Var9 = { 0f, 0f, 0f };
    Var9 = { Var9 + Local_10088.f_25 };
    CAM::POINT_CAM_AT_ENTITY(Local_10088.f_80[0], Local_10088.f_11, Var9, true);
    CAM::SHAKE_CAM(Local_10088.f_80[0], "HAND_SHAKE", 0.25f);
    CAM::SET_CAM_ACTIVE(Local_10088.f_80[0], true);
    CAM::SET_CAM_NEAR_CLIP(Local_10088.f_80[0], 0.01f);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
}