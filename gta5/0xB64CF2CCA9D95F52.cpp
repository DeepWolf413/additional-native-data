// fm_bj_race_controler.ysc @ L125112
void func_1501(var uParam0, var uParam1, var uParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  var uVar4;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam3))
  {
    VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam3, &iVar0, &iVar1, &iVar2);
  }
  else
  {
    func_1502(func_1503(3), &iVar0, &iVar1, &iVar2, &uVar3);
  }
  if ((iVar0 == iVar1 && iVar1 == iVar2) && iVar0 <= 15)
  {
    func_1502(func_1503(5), &iVar0, &iVar1, &iVar2, &uVar4);
  }
  *uParam0 = (SYSTEM::TO_FLOAT(iVar0) / 255f);
  *uParam1 = (SYSTEM::TO_FLOAT(iVar1) / 255f);
  *uParam2 = (SYSTEM::TO_FLOAT(iVar2) / 255f);
}