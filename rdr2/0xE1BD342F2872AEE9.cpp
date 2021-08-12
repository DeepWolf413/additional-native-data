// abigail2_1.ysc @ L38262
void func_921(int iParam0, float fParam1, bool bParam2)
{
  char* sVar0;

  sVar0 = func_1455(iParam0, 0, 0, 0);
  sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}