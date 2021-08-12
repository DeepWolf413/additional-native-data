// abigail21_outro.ysc @ L1053
void func_54(int iParam0)
{
  int iVar0;

  if (!func_45(iParam0))
  {
    return;
  }
  if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
  {
    iVar0 = func_78(iParam0);
    if (iVar0 != 0)
    {
      Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
      PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
    }
    else
    {
      Global_1360165[iParam0 /*1157*/].f_1 = 0;
    }
  }
}