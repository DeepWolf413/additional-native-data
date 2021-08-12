// act_caunc_rustling_invite.ysc @ L6124
int func_192(int* iParam0, int iParam1, int iParam2, int iParam3)
{
  if (!func_6(iParam1, 0))
  {
    return 0;
  }
  if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
  {
    return 0;
  }
  if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(iParam0->f_21, 16))
  {
    return 0;
  }
  if (!MISC::IS_BIT_SET(iParam0->f_21, 17))
  {
    MAP::_0x97F6F158CC5B5CA2(iParam1, iParam2);
    MISC::SET_BIT(&(iParam0->f_21), 17);
  }
  if (!MISC::IS_BIT_SET(iParam0->f_21, 18) && iParam3 != 0)
  {
    if (!MAP::_0x3CB8859F04763C78(iParam1, iParam2))
    {
      MAP::_0xBB68D4D3CA3DE402(iParam1, iParam3);
    }
    MISC::SET_BIT(&(iParam0->f_21), 18);
  }
  if (MISC::IS_BIT_SET(iParam0->f_21, 17) && MISC::IS_BIT_SET(iParam0->f_21, 18))
  {
    return 1;
  }
  return 0;
}