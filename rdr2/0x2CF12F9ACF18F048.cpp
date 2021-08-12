// aberdeenpigfarm.ysc @ L4425
void func_187(int iParam0, char* sParam1, int iParam2)
{
  if (iParam0 == 0)
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    sParam1 = "FEED_MONEY_EARN";
  }
  func_229(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}