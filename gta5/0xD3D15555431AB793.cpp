// am_pi_menu.ysc @ L454247
void func_6378()
{
  struct<2> Var0;
  
  if (func_5485(Global_2097152[func_234() /*5557*/].f_675.f_4237[Global_2520218.f_6739 /*3*/]))
  {
    StringCopy(&Var0, "AMDO_OBJ_", 16);
    StringIntConCat(&Var0, Global_2097152[func_234() /*5557*/].f_675.f_4237[Global_2520218.f_6739 /*3*/], 16);
    StringConCat(&Var0, "H", 16);
    if (MISC::SHOULD_USE_METRIC_MEASUREMENTS() && func_5486(Global_2097152[func_234() /*5557*/].f_675.f_4237[Global_2520218.f_6739 /*3*/]))
    {
      StringConCat(&Var0, "M", 16);
    }
    func_1119(&Var0, 0, 0);
  }
}