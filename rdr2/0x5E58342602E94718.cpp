// act_bankrobbery01.ysc @ L38746
bool func_1143(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
  float fVar0;

  fVar0 = func_1562(ENTITY::GET_ENTITY_HEADING(iParam0));
  fParam4 = func_1562(fParam4);
  if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
  {
    return true;
  }
  return false;
}