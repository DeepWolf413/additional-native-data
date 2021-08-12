// gang3.ysc @ L50885
void func_1252(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
  char* sVar0;

  if (iParam0 == -1)
  {
    return;
  }
  sVar0 = func_1816(iParam0);
  STREAMING::PREFETCH_SRL(sVar0);
  if (bParam2)
  {
    STREAMING::_0xAE00387E53B1E9FC();
  }
  if (bParam3)
  {
    STREAMING::_0xEF1A8A484118735E();
  }
  STREAMING::_0x7C907E8A725E5FD2(bParam1);
}