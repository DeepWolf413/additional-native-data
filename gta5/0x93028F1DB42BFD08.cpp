// maintransition.ysc @ L333185
void func_4187()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = SOCIALCLUB::SC_INBOX_GET_TOTAL_NUM_MESSAGES();
  iVar2 = 0;
  while (iVar2 < iVar0)
  {
    if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(iVar2))
    {
      iVar1 = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(iVar2);
      switch (iVar1)
      {
        case 1988401830:
          func_4188(iVar2, 1);
          break;
        }
    }
    iVar2++;
  }
}