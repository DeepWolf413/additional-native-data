// shoprobberies.ysc @ L24238
void func_786()
{
  if (!func_1408(iLocal_1772) || !func_1408(iLocal_1773))
  {
    return;
  }
  if (STREAMING::_IS_IMAP_ACTIVE(iLocal_1773) && !STREAMING::_0xFC464598F6EE97B0())
  {
    return;
  }
  if (!STREAMING::_0xFC464598F6EE97B0())
  {
    if (!STREAMING::_IS_IMAP_ACTIVE(iLocal_1773))
    {
      if (STREAMING::_IS_IMAP_ACTIVE(iLocal_1772))
      {
        STREAMING::_0x20D504994FDC4412("STR_03_P_MILLWINDOW_A", "STR_03_P_MILLWINDOW_D");
      }
    }
  }
  if (STREAMING::_0xFC464598F6EE97B0())
  {
    if (STREAMING::_0xC2C05DEFE85A0B64())
    {
      iLocal_1772 = iLocal_1773;
      STREAMING::_0x040EE319EFD1D3B5();
    }
  }
}