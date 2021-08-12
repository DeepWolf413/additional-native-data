// abigail2_1.ysc @ L26010
void func_467(int iParam0)
{
  if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
  {
    TASK::_DELETE_SCENARIO_POINT(Global_1899848.f_15.f_1);
  }
  if (!PED::IS_PED_INJURED(Global_35))
  {
    if (iParam0 == 1)
    {
      if (!func_959(4))
      {
        WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
      }
    }
    PED::_0x58F7DB5BD8FA2288(Global_35);
  }
  Global_1899848.f_15 = 0;
}