// finale_heist_prepc.ysc @ L11040
int func_200(struct<16> Param0, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22)
{
  if (func_4(iLocal_176))
  {
    if (MISC::IS_AREA_OCCUPIED(Param0.f_15[0 /*3*/], Param0.f_15[1 /*3*/], false, true, true, false, false, 0, false))
    {
      return 1;
    }
  }
  return 0;
}