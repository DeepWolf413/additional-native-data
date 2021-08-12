// am_armwrestling.ysc @ L117873
int func_925()
{
  struct<3> Var0;
  float fVar3;
  int iVar4;
  
  fVar3 = 45f;
  iVar4 = 666;
  if (!CAM::DOES_CAM_EXIST(Global_2453903.f_2846.f_20))
  {
    Global_2453903.f_2846.f_23 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
    Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
    fVar3 = CAM::GET_FINAL_RENDERED_CAM_FOV();
    func_740(0, 0);
    GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
    Global_2453903.f_2846.f_20 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Global_2453903.f_2846.f_23, Var0, 65f, false, 2);
    CAM::SET_CAM_FOV(Global_2453903.f_2846.f_20, fVar3);
    CAM::SET_CAM_ACTIVE(Global_2453903.f_2846.f_20, true);
    CAM::RENDER_SCRIPT_CAMS(true, false, iVar4, true, true, 0);
    if (Global_2453903.f_2846.f_27)
    {
      CAM::SET_CAM_PARAMS(Global_2453903.f_2846.f_20, Global_2453903.f_2846.f_23, Var0, fVar3, 0, 1, 1, 2);
      CAM::SET_CAM_PARAMS(Global_2453903.f_2846.f_20, Global_2453903.f_2846.f_23 + Vector(3f, 0f, 0f), Var0, fVar3, iVar4, 0, 0, 2);
    }
    NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
    Global_2453903.f_2846.f_42 = 1;
  }
  else
  {
    return 1;
  }
  return 0;
}