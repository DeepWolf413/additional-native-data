// abigail2_1.ysc @ L50408
void func_1297(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
  iVar0 = 0;
  while (iVar0 < 10)
  {
    PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
    iVar0++;
  }
}