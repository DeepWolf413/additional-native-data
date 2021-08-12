// barry1.ysc @ L44428
void func_435(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    iVar0 = func_32(iParam0);
    func_436(iParam0, &(Global_112293.f_2361.f_539.f_1764));
    iVar1 = 0;
    while (iVar1 <= (8 - 1))
    {
      Global_112293.f_2361.f_539.f_1730[iVar1 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar1);
      iVar1++;
    }
  }
}