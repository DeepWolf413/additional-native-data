// rcm_pearson1.ysc @ L44234
void func_1340(int iParam0, vector3 vParam1, float fParam4)
{
  vector3 vVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    return;
  }
  PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0), 1);
  vVar0 = { vParam1 };
  vVar0.f_2 = (vVar0.z + 2f);
  if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
  {
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*iParam0, vVar0, fParam4, false, true);
  }
  else
  {
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*iParam0, vParam1, fParam4, false, true);
  }
  ENTITY::_0x9587913B9E772D29(*iParam0, 0);
}