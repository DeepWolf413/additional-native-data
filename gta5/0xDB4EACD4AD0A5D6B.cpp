// am_challenges.ysc @ L21973
void func_620(int iParam0)
{
  char cVar0[64];
  char cVar16[64];
  int iVar32;
  int iVar33;
  
  if (iParam0 >= Global_1391712)
  {
    return;
  }
  if (PED::IS_PEDHEADSHOT_VALID(Global_1391551[iParam0 /*5*/].f_2))
  {
    StringCopy(&cVar0, "CHAR_DEFAULT", 64);
    if (Global_1391551[iParam0 /*5*/].f_2 != 0)
    {
      StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1391551[iParam0 /*5*/].f_2), 64);
      HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
    }
    PED::UNREGISTER_PEDHEADSHOT(Global_1391551[iParam0 /*5*/].f_2);
  }
  iVar32 = iParam0;
  iVar33 = iVar32 + 1;
  while (iVar33 < Global_1391712)
  {
    Global_1391551[iVar32 /*5*/] = { Global_1391551[iVar33 /*5*/] };
    iVar32++;
    iVar33++;
  }
  func_621(&(Global_1391551[iVar32 /*5*/]));
  Global_1391712 = (Global_1391712 - 1);
}