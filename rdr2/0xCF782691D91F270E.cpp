// discoverable_alchemist_house.ysc @ L4830
int func_87(int iParam0, int iParam1)
{
  int iVar0;

  iVar0 = func_86(iParam0, 1, iParam1);
  if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
  {
    return iVar0;
  }
  iVar0 = func_86(iParam0, 0, iParam1);
  if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
  {
    return iVar0;
  }
  return 0;
}