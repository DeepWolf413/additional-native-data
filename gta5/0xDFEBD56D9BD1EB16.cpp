// assassin_bus.ysc @ L11795
void func_179()
{
  if (!iLocal_1722)
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
    {
      if (!func_168(&iLocal_1840))
      {
        func_183(&iLocal_1840);
      }
      else if (func_180(&iLocal_1840, 10f))
      {
        AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ASS_BUS_01", 0f);
        iLocal_1722 = 1;
      }
    }
  }
}