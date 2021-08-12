// director_mode.ysc @ L147155
void func_1144(int iParam0, int iParam1, int iParam2, int iParam3)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  Var0 = { ENTITY::_GET_ENTITY_BONE_ROTATION(iParam0, iParam2) };
  Var3 = { ENTITY::_GET_ENTITY_BONE_ROTATION(iParam1, iParam3) };
  fVar6 = (((Var0.f_2 - Var3.f_2) + 360f) % 360f);
  if (fVar6 > 180f)
  {
    fVar6 = (fVar6 - 360f);
  }
  if (MISC::ABSF(fVar6) <= 90.001f && MISC::ABSF(fVar6) >= 89.001f)
  {
    ENTITY::SET_ENTITY_HEADING(iParam0, ((ENTITY::GET_ENTITY_HEADING(iParam0) + 30f) % 360f));
    Var0 = { ENTITY::_GET_ENTITY_BONE_ROTATION(iParam0, iParam2) };
    fVar6 = (((Var0.f_2 - Var3.f_2) + 360f) % 360f);
  }
  if ((iParam2 == 2 && iParam3 != 2) || (iParam2 != 2 && iParam3 == 2))
  {
    fVar6 = ((fVar6 + 180f) % 360f);
  }
  fVar6 = ((fVar6 + 360f) % 360f);
  if (fVar6 > 180f)
  {
    fVar6 = (fVar6 - 360f);
  }
  if (MISC::ABSF(fVar6) <= 90.001f)
  {
    ENTITY::SET_ENTITY_HEADING(iParam0, ((ENTITY::GET_ENTITY_HEADING(iParam0) + 181f) % 360f));
  }
}