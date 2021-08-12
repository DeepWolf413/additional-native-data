// beat_savage_warning.ysc @ L1944
bool func_72(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_234[iParam0]))
  {
    if (func_130(&(iLocal_238[iParam1]), 0))
    {
      if (func_130(&(iLocal_238[iParam2]), 0))
      {
        ENTITY::SET_ENTITY_VISIBLE(iLocal_238[iParam2], false);
        ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_238[iParam1], iLocal_234[iParam0], -1, PED::GET_PED_BONE_INDEX(iLocal_234[iParam0], iParam3), vParam4, vParam7, vParam10, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
        return true;
      }
    }
  }
  return false;
}