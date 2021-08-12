// ambush_inb_harass.ysc @ L1673
void func_49()
{
  if (func_61(Local_15.f_56, 0, 1))
  {
    ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
  }
  if (PATHFIND::_0xDE0EA444735C1368(Local_274.f_40[4]))
  {
    PATHFIND::_0x2C87C3E1C7B96EE2(Local_274.f_40[4]);
  }
  if (func_157(&Local_274, 2048))
  {
    if (func_198(0f, 1, Global_35, 1))
    {
      if (!func_173(&Local_274, 4194304))
      {
        if (func_199(1, 1))
        {
          func_181(Global_35, 0, "RE_HAT_RKR_V1_PLYFINAL_FEUD", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0);
        }
        else
        {
          func_181(Global_35, 0, "RE_HAT_RKR_V1_PLYFINAL_RUN", 1117782016 /* Float: 80f */, 0, 1744022339, 0, 0);
        }
      }
    }
  }
  AUDIO::_0x05D6195FB4D428F4(joaat("REHAT_END"));
  STREAMING::_REMOVE_IMAP(-64729392);
}