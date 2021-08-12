// pause_menu.ysc @ L950
void func_22()
{
  struct<10> Var0;
  struct<16> Var10;

  if (func_2())
  {
    MISC::CLEAR_BIT(&Global_1357505, 8);
    ANIMSCENE::_0xCDCD7B2D49AEE73A(1);
    GRAPHICS::_0xEC3D8C228FE553D7(0);
    Global_1357503 = 1;
    Var10 = { Var0 };
    StringCopy(&(Var10.f_10), "camera_photomode", 32);
    Var10.f_14 = 1024;
    Var10.f_15 = 0;
    func_90(Var10, 0);
  }
}