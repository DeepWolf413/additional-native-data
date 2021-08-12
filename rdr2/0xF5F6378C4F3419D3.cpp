// cornwall1.ysc @ L79844
void func_2033(int iParam0, int iParam1)
{
  float fVar0;

  if (!PED::IS_PED_INJURED(iParam0))
  {
    fVar0 = (((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
    PED::SET_PED_MAX_HEALTH(iParam0, iParam1);
    ENTITY::_SET_ENTITY_HEALTH(iParam0, BUILTIN::ROUND((((fVar0 / 100f) * (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
  }
}