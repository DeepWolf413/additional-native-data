// abigail2_1.ysc @ L21333
void func_309()
{
  int iVar0;

  SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
  if (MISC::IS_ORBIS_VERSION())
  {
    iVar0 = func_570(13);
    Global_1898441[iVar0 /*38*/] = 13;
    StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_WIN2_TITLE", 24);
    StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
    StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_WIN2_COM", 24);
  }
}