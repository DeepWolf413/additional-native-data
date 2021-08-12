// agency_heist2.ysc @ L111588
void func_717(int iParam0)
{
  int iVar0;
  
  iVar0 = func_42(iParam0);
  if (func_41(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    Global_112293.f_2361.f_539.f_2318[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
  }
}