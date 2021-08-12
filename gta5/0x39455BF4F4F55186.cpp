// fm_mission_controller_2020.ysc @ L346001
int func_5313(struct<3> Param0)
{
  struct<3> Var0;
  
  Var0 = { 0.25f, 0.25f, 0.25f };
  if (MISC::_0x39455BF4F4F55186(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1, 0, iLocal_22078, 0))
  {
    GRAPHICS::DRAW_DEBUG_BOX(Param0 - Var0, Param0 + Var0, 255, 0, 0, 50);
    return 0;
  }
  return 1;
}