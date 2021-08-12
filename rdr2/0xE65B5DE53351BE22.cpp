// doc_player_journal.ysc @ L2950
bool func_83(int iParam0)
{
  int iVar0;
  vector3 vVar1;
  int iVar7;

  iVar7 = HUD::_JOURNAL_GET_ENTRY_COUNT();
  if (iParam0 < iVar7)
  {
    iVar0 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(iParam0);
    HUD::_JOURNAL_GET_ENTRY_INFO(iVar0, &vVar1);
    if (vVar1.z == joaat("JOURNAL_CATEGORY_BEECHERS_DEBT"))
    {
      return true;
    }
  }
  return false;
}