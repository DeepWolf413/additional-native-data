// act_bankrobbery01.ysc @ L57783
bool func_1852(var uParam0, int iParam1)
{
  float fVar0;
  int iVar1;
  int iVar2;

  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
  {
    return false;
  }
  if (!PED::IS_PED_HUMAN(iParam1))
  {
    return false;
  }
  fVar0 = func_1978(uParam0);
  if (uParam0->f_12 > func_1991(uParam0) && uParam0->f_12 > fVar0)
  {
    return false;
  }
  iVar2 = func_1992(iParam1);
  iVar1 = func_1993(uParam0->f_14);
  if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
  {
    if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
    {
      return true;
    }
  }
  return false;
}