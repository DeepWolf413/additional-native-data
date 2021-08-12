// abigail2_1.ysc @ L50224
void func_1287(int iParam0)
{
  int iVar0;

  if (func_20() != -1)
  {
    return;
  }
  if (iParam0 == -1)
  {
    PED::_RESTORE_PED_STAMINA(Global_35, 100f);
  }
  else
  {
    iVar0 = 8;
    PED::_CHARGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
  }
}