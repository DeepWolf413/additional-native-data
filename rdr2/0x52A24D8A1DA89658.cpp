// reverend1.ysc @ L55519
void func_1372(int iParam0)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iParam0]))
  {
    return;
  }
  PED::_0x52A24D8A1DA89658(iLocal_63[iParam0], 2, 0);
  iVar0 = 3;
  while (iVar0 <= 18)
  {
    PED::_0x52A24D8A1DA89658(iLocal_63[iParam0], iVar0, 1);
    iVar0++;
  }
}