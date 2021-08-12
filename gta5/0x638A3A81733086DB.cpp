// am_mp_arcade_claw_crane.ysc @ L79379
int func_522(int iParam0)
{
  struct<21> Var0;
  
  Var0.f_1 = -1;
  Var0.f_2 = -1;
  Var0.f_9 = -1;
  Var0.f_16 = -1;
  Var0.f_19 = -1;
  Var0.f_20 = -1;
  Var0.f_16 = ((NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() * func_534(16)) + iParam0);
  Var0 = 186;
  if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("camhedz_arcade", Var0.f_16, true, 0))
  {
    if (func_523(Var0, 0))
    {
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}