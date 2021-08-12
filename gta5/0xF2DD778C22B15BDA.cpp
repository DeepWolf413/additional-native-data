// altruist_cult.ysc @ L3896
int func_117(int iParam0)
{
  if (func_122())
  {
    Global_112283 = 1;
    Global_112280 = MISC::GET_GAME_TIMER();
    if (func_121(Global_112282))
    {
      func_118(0);
    }
    HUD::SET_MISSION_NAME(true, "RE_TITLE");
    if (iParam0 && func_121(Global_112282))
    {
      HUD::FLASH_MINIMAP_DISPLAY();
    }
    return 1;
  }
  return 0;
}