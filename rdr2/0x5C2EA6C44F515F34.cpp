// abigail2_1.ysc @ L41641
int func_1040(int iParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  var uVar2;

  if (!func_571(iParam0, 0))
  {
    return 0;
  }
  iVar0 = func_590(iParam0);
  if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
  {
    return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
  }
  else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
  {
    return iParam0;
  }
  if (func_591(iParam0, 1399091007))
  {
    func_1104(iParam0, &uVar1, &uVar2);
    return uVar2;
  }
  return 0;
}