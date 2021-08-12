// doc_player_journal.ysc @ L3841
void func_121(int iParam0, var uParam1, var uParam2)
{
  int iVar0;
  var uVar1;
  int iVar7;

  iVar0 = func_125(iParam0);
  iVar7 = HUD::_JOURNAL_GET_GRIME_AT_INDEX(iVar0);
  HUD::_JOURNAL_GET_ENTRY_INFO(iVar7, &uVar1);
  *uParam1 = func_126(iVar0);
  uParam1->f_2 = 0;
  *uParam2 = *uParam1;
  func_127(iVar0, &(uParam1->f_5), &(uParam1->f_6));
  func_128(iParam0, uParam1->f_5, uParam1->f_6, &(uParam1->f_3), &(uParam1->f_4));
}