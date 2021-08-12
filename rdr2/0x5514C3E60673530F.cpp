// doc_player_journal.ysc @ L2183
int func_59(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  vector3 vVar3;

  iVar1 = -1;
  iVar0 = 0;
  while (iVar0 < 4)
  {
    if ((*uParam0)[iVar0 /*6*/] != -1)
    {
      iVar2 = HUD::_JOURNAL_GET_ENTRY_AT_INDEX((*uParam0)[iVar0 /*6*/]);
      HUD::_JOURNAL_GET_ENTRY_INFO(iVar2, &vVar3);
      if (!func_54(vVar3.z))
      {
        if (!func_52(vVar3.z) || (*uParam0)[iVar0 /*6*/] == iParam1)
        {
          if ((*uParam0)[iVar0 /*6*/] > iVar1)
          {
            iVar1 = (*uParam0)[iVar0 /*6*/];
          }
        }
      }
    }
    iVar0++;
  }
  return iVar1;
}