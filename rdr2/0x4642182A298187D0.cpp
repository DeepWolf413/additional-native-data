// act_caunc_rustling.ysc @ L64042
int func_1845(int iParam0, int iParam1)
{
  var uVar0;
  int iVar4;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (PED::IS_PED_INJURED(iParam0))
  {
    return 0;
  }
  iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
  if (iVar4 != 0)
  {
    return 1;
  }
  return 0;
}