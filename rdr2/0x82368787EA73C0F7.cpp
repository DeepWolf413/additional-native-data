// abigail2_1.ysc @ L14202
void func_17(char[4] cParam0, bool bParam1)
{
  struct<7> Var0;

  Var0 = func_186(func_12(cParam0->f_607));
  Var0.f_1 = 0;
  Var0.f_2 = func_131(func_33(cParam0));
  Var0.f_4 = (ENTITY::GET_ENTITY_HEALTH(Global_35) * 100 / ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
  Var0.f_5 = Global_40.f_7729;
  Var0.f_6 = func_208(0);
  if (bParam1)
  {
    Var0.f_3 = 5;
  }
  else
  {
    Var0.f_3 = func_22(cParam0);
  }
  TELEMETRY::_TELEMETRY_MISSION_OVER(&(Global_1835011[cParam0->f_607 /*74*/].f_8), &Var0);
}