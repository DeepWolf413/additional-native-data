// fm_bj_race_controler.ysc @ L316779
void func_4344(int iParam0, int iParam1)
{
  PLAYER::SET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID(), iParam1);
  if ((!Global_1574418 && !Global_1574416) && Global_1590908[PLAYER::PLAYER_ID() /*874*/] == -1)
  {
    PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), iParam0);
  }
  HUD::SET_MAX_ARMOUR_HUD_DISPLAY(iParam1);
}