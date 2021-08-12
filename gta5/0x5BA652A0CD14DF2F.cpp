// agency_heist1.ysc @ L91420
void func_402(int iParam0)
{
  int iVar0;
  
  iVar0 = func_29(iParam0);
  if (func_28(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    PED::ADD_ARMOUR_TO_PED(iParam0, (Global_112293.f_2361.f_539.f_294[iVar0] - PED::GET_PED_ARMOUR(iParam0)));
  }
}