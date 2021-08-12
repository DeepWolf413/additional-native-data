// winter2.ysc @ L52949
void func_1238(int iParam0, int iParam1)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < *iParam0)
  {
    if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*3*/]) && !ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*3*/]))
    {
      PED::SET_PED_RESET_FLAG((*iParam0)[iVar0 /*3*/], 54, true);
      PED::SET_PED_RESET_FLAG((*iParam0)[iVar0 /*3*/], 131, true);
      if (!PED::IS_PED_INJURED(iLocal_637))
      {
        PED::_0x10F96086123B939F(iLocal_637, (*iParam0)[iVar0 /*3*/], 1065353216 /* Float: 1f */);
      }
      if (!PED::IS_PED_INJURED(iLocal_638))
      {
        PED::_0x10F96086123B939F(iLocal_638, (*iParam0)[iVar0 /*3*/], 1065353216 /* Float: 1f */);
      }
      if (iParam1 == 1)
      {
        PED::SET_PED_RESET_FLAG((*iParam0)[iVar0 /*3*/], 170, true);
      }
    }
    iVar0++;
  }
}