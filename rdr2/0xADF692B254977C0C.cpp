// abigail2_1.ysc @ L23931
int func_384(vector3 vParam0, var uParam3)
{
  int iVar0;

  if (MISC::_0x1B065A2BF7953815(0) != 1)
  {
    func_501(0, 1);
  }
  else
  {
    return 0;
  }
  iVar0 = func_790(Global_35, 0, 2, 0);
  if (!WEAPON::IS_WEAPON_VALID(iVar0))
  {
    iVar0 = func_791(0, 0);
    if (func_685(iVar0))
    {
      WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
      func_792(1, 0);
    }
  }
  else
  {
    func_792(1, 0);
  }
  func_202(0);
  func_502(0, vParam0, uParam3);
  return 1;
}