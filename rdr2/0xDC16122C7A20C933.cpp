// finale1.ysc @ L66410
void func_1548(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar0 = func_1178(iParam0, 1);
  if (func_655(iVar0))
  {
    iVar1 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iVar0);
    iVar2 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_PISTOL"));
    iVar3 = 0;
    WEAPON::GET_MAX_AMMO(Global_35, &iVar3, iVar1);
    iVar4 = (iVar2 + iParam1);
    if (iVar4 > iVar3)
    {
      iVar5 = (iVar4 - iVar3);
      iParam1 = (iParam1 - iVar5);
    }
    if (iParam1 > 0)
    {
      func_334(iParam0, iParam1, 1, 0, 0, 752097756, 0, 0, 0, 0);
    }
  }
}