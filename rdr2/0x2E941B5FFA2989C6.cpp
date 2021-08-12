// act_caunc_rustling_invite.ysc @ L8931
int func_306(int iParam0, bool bParam1)
{
  if (!func_6(Global_1360165[iParam0 /*1157*/].f_70, 0))
  {
    return 0;
  }
  if (func_261(iParam0))
  {
    return 0;
  }
  if (!bParam1 || !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_70, true, false), 3f))
  {
    PERSCHAR::_0xD4B614179BCD0654(func_467(iParam0, 0));
    return 1;
  }
  return 0;
}