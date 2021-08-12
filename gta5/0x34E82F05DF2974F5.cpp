// am_darts.ysc @ L102824
void func_608(var uParam0, var uParam1, bool bParam2, int iParam3)
{
  struct<3> Var0;
  
  Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_268), uParam0->f_14.f_2) };
  if (iParam3 == 1)
  {
    Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_268), uParam0->f_14.f_2) };
  }
  GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Local_274, &(Local_274.f_1));
  if ((MISC::GET_GAME_TIMER() % 1000) < 50)
  {
  }
  if (!bParam2)
  {
    if (bLocal_307)
    {
      func_600("Darts", "Dart_Reticules_Zoomed", &Local_274, 1, 0, 4, 0);
    }
    else
    {
      func_600("Darts", "Dart_Reticules", &Local_274, 1, 0, 4, 0);
    }
    if (!iLocal_314)
    {
      iLocal_314 = 1;
    }
  }
}