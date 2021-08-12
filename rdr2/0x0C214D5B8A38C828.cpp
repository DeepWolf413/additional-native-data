// abigail2_1.ysc @ L22867
void func_340(int iParam0)
{
  if (func_82(32768))
  {
    return;
  }
  if (iParam0 < 0)
  {
    func_701(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
    Global_1879514.f_14 = 1;
    Global_1879514.f_15 = 0;
  }
  else
  {
    func_701(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
    Global_1879514.f_14 = 0;
    Global_1879514.f_15 = 1;
  }
}