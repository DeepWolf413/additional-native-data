// abigail2_1.ysc @ L48638
var func_1223(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
  var uVar0;
  char* sVar1;

  func_1222(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
  if (bParam4)
  {
    UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
    uVar0 = func_914(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
  }
  else if (!func_1661(cParam0, sParam1))
  {
    sVar1 = func_1454(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
    UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
    uVar0 = func_1453(sVar1, iParam3, 0, 0, 0, 1);
  }
  return uVar0;
}