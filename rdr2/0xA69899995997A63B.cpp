// camp_beaverhollow.ysc @ L34222
void func_1126(int iParam0, float fParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  iParam0 = func_769(iParam0);
  if (iParam0 == -1)
  {
    return;
  }
  if (iParam0 >= 7)
  {
    return;
  }
  Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
  iVar0 = func_368(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
  {
    return;
  }
  iVar1 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
  ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
  iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
  Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar2;
  PED::_0xA69899995997A63B(iVar0, iVar2);
  func_1159(iVar2);
}