// fillet_sp.ysc @ L13139
void func_517(var uParam0)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar4;

  if (!CAM::DOES_CAM_EXIST(uParam0->f_314.f_30))
  {
    iVar0 = func_161(uParam0->f_21);
    if (func_199(iVar0))
    {
      vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_592[iVar0 /*202*/], uParam0->f_314.f_31) };
      vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_592[iVar0 /*202*/], uParam0->f_314.f_34) };
      uParam0->f_314.f_30 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
      CAM::SET_CAM_COORD(uParam0->f_314.f_30, vVar1);
      CAM::POINT_CAM_AT_COORD(uParam0->f_314.f_30, vVar4);
      uParam0->f_314.f_37 = CAM::GET_GAMEPLAY_CAM_FOV();
      CAM::SET_CAM_FOV(uParam0->f_314.f_30, (uParam0->f_314.f_37 + 2.5f));
      CAM::SHAKE_CAM(uParam0->f_314.f_30, "TABLE_GAMES_IDLE_SHAKE", 1f);
      CAM::SET_CAM_ACTIVE(uParam0->f_314.f_30, true);
      CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
      func_502(&(uParam0->f_314), 2, 0);
      uParam0->f_314.f_38 = 0f;
    }
  }
}