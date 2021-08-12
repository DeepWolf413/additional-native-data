// agency_heist3b.ysc @ L97865
void func_499(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
  iVar2 = func_404(iVar1);
  iVar0 = 0;
  while (iVar0 <= 11)
  {
    if (Global_112293.f_2361.f_539[iVar2 /*65*/].f_13[iVar0] != -1 && Global_112293.f_2361.f_539[iVar2 /*65*/][iVar0] != -1)
    {
      PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, iVar0, Global_112293.f_2361.f_539[iVar2 /*65*/].f_13[iVar0], Global_112293.f_2361.f_539[iVar2 /*65*/][iVar0]);
    }
    iVar0++;
  }
}