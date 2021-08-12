// am_ga_pickups.ysc @ L656
struct<5> func_23(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
  struct<5> Var0;
  
  if (func_19() && func_18(iParam0))
  {
    Var0 = { func_24(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
  }
  else
  {
    Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
  }
  return Var0;
}