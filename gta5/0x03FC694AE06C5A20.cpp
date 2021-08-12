// am_casino_peds.ysc @ L288784
void func_3847(int iParam0)
{
  struct<3> Var0;
  
  if (iParam0 == 92)
  {
    func_3851(0);
  }
  else if (iParam0 == 97)
  {
    ENTITY::REMOVE_MODEL_HIDE(1875.179f, 272.5103f, 161.3369f, 1f, joaat("csx_coastsmalrock_02_"), false);
  }
  else if (iParam0 == 94)
  {
    ENTITY::REMOVE_MODEL_HIDE(-2285.574f, 2334.016f, 15.0891f, 1f, joaat("ch1_04_dcl_23a"), true);
  }
  Var0 = { func_3850(iParam0) };
  ENTITY::REMOVE_MODEL_HIDE(Var0, 15f, func_3849(iParam0), false);
  GRAPHICS::_GRASS_LOD_RESET_SCRIPT_AREAS();
  if ((func_3848(iParam0) && Global_1683970.f_483 > -1) && GRAPHICS::_0x2C42340F916C5930(Global_1683970.f_483))
  {
    GRAPHICS::_0x649C97D52332341A(Global_1683970.f_483);
    Global_1683970.f_483 = -1;
  }
  GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}