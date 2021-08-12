// fmmc_launcher.ysc @ L496117
void func_7735(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = uParam0->f_498;
  if (iVar3 != -1)
  {
    iVar0 = Global_1590908[iVar3 /*874*/].f_96.f_7;
    iVar1 = Global_1590908[iVar3 /*874*/].f_96.f_8;
    iVar2 = Global_1590908[iVar3 /*874*/].f_96.f_9;
    VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(uParam0->f_488, iVar0, iVar1, iVar2);
    iVar0 = Global_1590908[iVar3 /*874*/].f_96.f_10;
    iVar1 = Global_1590908[iVar3 /*874*/].f_96.f_11;
    iVar2 = Global_1590908[iVar3 /*874*/].f_96.f_12;
    VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(uParam0->f_488, iVar0, iVar1, iVar2);
  }
}