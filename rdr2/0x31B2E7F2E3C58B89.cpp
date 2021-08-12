// abigail2_1.ysc @ L58299
int func_1552(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  int iVar0;

  if (iParam0 == Global_1946804.f_57[func_670(iParam1, 1) /*11*/])
  {
    return 0;
  }
  iVar0 = 0;
  if (!func_1107(524288))
  {
    switch (iParam1)
    {
      case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
        iVar0++;
        break;
      case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
        iVar0++;
        break;
    }
  }
  iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3));
  return iVar0;
}