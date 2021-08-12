// marston1.ysc @ L60996
void func_1587(char[4] cParam0)
{
  int iVar0;

  iVar0 = func_33(cParam0);
  if (func_1419(cParam0, 9) && !STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("MAR1"), joaat("MAR1_DONTDROPITEMS")))
  {
    func_2095(cParam0, joaat("MAR1_DONTDROPITEMS"));
  }
  if (iVar0 < iLocal_156 || ((iVar0 >= iLocal_156 && (func_29() || func_1419(cParam0, 10))) && SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1"))))
  {
    SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
  }
}