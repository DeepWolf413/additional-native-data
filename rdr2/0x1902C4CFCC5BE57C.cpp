// abigail2_1.ysc @ L65338
int func_1795(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
  {
    return 0;
  }
  iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
  if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
  {
    return 0;
  }
  PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
  if (bParam2)
  {
    PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
  }
  return 1;
}