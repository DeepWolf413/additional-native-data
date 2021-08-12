// abigail21_outro.ysc @ L1928
int func_100(int iParam0)
{
  int iVar0;
  int iVar1;

  if (!func_45(iParam0))
  {
    return 0;
  }
  if (!PERSCHAR::_0x800DF3FC913355F3(Global_1360165[iParam0 /*1157*/].f_126))
  {
    iVar0 = func_82(iParam0, 1);
    iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
    if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
    {
      PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
    }
    Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
    PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
  }
  return Global_1360165[iParam0 /*1157*/].f_126;
}