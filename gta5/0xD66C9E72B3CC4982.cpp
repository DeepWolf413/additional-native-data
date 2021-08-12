// event_controller.ysc @ L527
int func_5(struct<13> Param0)
{
  struct<13> Var0[1];
  int iVar14;
  
  if (!MISC::IS_DURANGO_VERSION())
  {
    return -1;
  }
  Var0[0 /*13*/] = { Param0 };
  iVar14 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
  if (iVar14 < 0)
  {
    return -1;
  }
  return iVar14;
}