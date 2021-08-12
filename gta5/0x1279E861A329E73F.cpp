// am_taxi.ysc @ L6282
void func_142()
{
  struct<3> Var0;
  
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1713, "SET_INPUT_EVENT");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  iLocal_1707++;
  if (iLocal_1707 > (iLocal_1706 - 1))
  {
    iLocal_1707 = 0;
  }
  if (HUD::DOES_BLIP_EXIST(Local_1721[iLocal_1707 /*3*/]))
  {
    Var0 = { HUD::GET_BLIP_COORDS(Local_1721[iLocal_1707 /*3*/]) };
    if (!func_26(Var0))
    {
      HUD::LOCK_MINIMAP_POSITION(Var0.x, Var0.f_1);
    }
  }
}