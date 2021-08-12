// abigail2_1.ysc @ L38187
var func_914(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
  char* sVar0;

  if (bParam2)
  {
    UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
  }
  if (Global_1572887.f_12 != -1)
  {
    return func_1453(sParam0, iParam1, 0, 0, 1, 1);
  }
  sVar0 = func_1454(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
  if (bParam3)
  {
    UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
  }
  return func_1453(sVar0, iParam1, 0, 0, 1, 1);
}