// fm_capture_creator.ysc @ L289474
void func_3299(var uParam0, struct<3> Param1)
{
  struct<3> Var0;
  
  switch (*uParam0)
  {
    case 0:
      GRAPHICS::GOLF_TRAIL_SET_ENABLED(true);
      GRAPHICS::GOLF_TRAIL_SET_TESSELLATION(3, 1);
      GRAPHICS::_0xC0416B061F2B7E5E(true);
      GRAPHICS::GOLF_TRAIL_SET_FACING(true);
      *uParam0 = 1;
      break;
    
    case 1:
      Var0 = { Param1.x, Param1.f_1, (Param1.f_2 - 10f) };
      GRAPHICS::GOLF_TRAIL_SET_FIXED_CONTROL_POINT(0, Param1, 0.2f, 255, 255, 0, 255);
      GRAPHICS::GOLF_TRAIL_SET_FIXED_CONTROL_POINT(1, Var0, 0.2f, 255, 255, 0, 255);
      GRAPHICS::GOLF_TRAIL_SET_FIXED_CONTROL_POINT(2, Param1.x, Param1.f_1, -300f, 0.2f, 255, 255, 0, 255);
      break;
  }
}