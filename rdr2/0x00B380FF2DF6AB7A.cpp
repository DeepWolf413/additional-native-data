// homeinvasion.ysc @ L89580
void func_2885(int iParam0, var uParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
  int iVar0;

  if (!func_159(*iParam0, 0, 1))
  {
    return;
  }
  PED::_0x00B380FF2DF6AB7A(*iParam0, 1);
  PED::_0xEEED8FAFEC331A70(*iParam0, Global_36, 3);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, fParam2, fParam3, fParam4, fParam5, -1, 0.25f, 0, 40000f);
  TASK::TASK_COMBAT_PED(0, *uParam1, 0, 16);
  func_1304(*iParam0, &iVar0, fParam6, fParam6, 1, 1);
}