// fussar2.ysc @ L52003
void func_1236()
{
  int iVar0;
  int iVar1;

  if (!func_1754(256))
  {
    func_1755();
    MISC::_0x3373779BAF7CAF48("MISTY", "MISTY_guama");
    MISC::_0x3373779BAF7CAF48("HIGHPRESSURE", "HIGHPRESSURE_guama");
    iVar0 = 0;
    while (iVar0 < 24)
    {
      iVar1 = func_1756(iVar0, 1);
      if (iVar1 == 0 || iVar1 == -1439599467)
      {
      }
      else if (iVar1 == joaat("MISTY") || iVar1 == joaat("HIGHPRESSURE"))
      {
        MISC::_0xD3F943B88F55376A(iVar1);
      }
      else
      {
        MISC::_0x2916B30DC6C41179(iVar1);
      }
      iVar0++;
    }
    GRAPHICS::SET_TIMECYCLE_MODIFIER("GUAMA_freeplay1");
    func_1757(256);
  }
  func_1758(9, 0, 0, 0);
}