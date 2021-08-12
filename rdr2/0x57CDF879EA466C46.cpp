// benchmark.ysc @ L8578
void func_306(var uParam0)
{
  if (CAM::DOES_CAM_EXIST(uParam0->f_528))
  {
    CAM::DESTROY_CAM(uParam0->f_528, false);
  }
  uParam0->f_528 = CAM::CREATE_CAMERA(joaat("DEFAULT_SPLINE_CAMERA"), true);
  CAM::ADD_CAM_SPLINE_NODE(uParam0->f_528, CAM::GET_GAMEPLAY_CAM_COORD(), CAM::GET_GAMEPLAY_CAM_ROT(2), 0, 3, 2);
  CAM::ADD_CAM_SPLINE_NODE(uParam0->f_528, CAM::GET_GAMEPLAY_CAM_COORD() + Vector(10f, 0f, 0f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 5000, 3, 2);
  CAM::SET_CAM_SPLINE_PHASE(uParam0->f_528, 0f);
  CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_528, 3);
  CAM::RENDER_SCRIPT_CAMS(true, true, 3000, true, false, 0);
}