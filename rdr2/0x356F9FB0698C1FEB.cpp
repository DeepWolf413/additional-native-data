// bjack_sp.ysc @ L30319
char* func_1040(var uParam0, int iParam1)
{
  if (!MISC::IS_BIT_SET(uParam0->f_22, iParam1))
  {
    return "";
  }
  if (!MISC::IS_BIT_SET(uParam0->f_23, iParam1))
  {
    return "";
  }
  return NETWORK::_0x356F9FB0698C1FEB(iParam1, uParam0->f_27);
}