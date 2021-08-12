// barry1.ysc @ L48995
void func_565(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    iVar0 = func_32(iParam0);
    func_566(iParam0, &(Global_112293.f_2361.f_539.f_1764), bParam1);
    iVar1 = 0;
    while (iVar1 <= (8 - 1))
    {
      HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0]);
      iVar1++;
    }
  }
}