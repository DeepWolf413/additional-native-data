// abigail2_1.ysc @ L40464
void func_1001(var uParam0, bool bParam1)
{
  char* sVar0;

  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1490(func_1489(255), joaat("COLOR_PURE_WHITE")));
  }
  else
  {
    sVar0 = "";
    if (bParam1)
    {
      sVar0 = "HORSE_BLIP_TEMPORARY";
    }
    else if (func_296())
    {
      sVar0 = "HORSE_BLIP_ARTHUR";
    }
    else if (func_1026())
    {
      sVar0 = "HORSE_BLIP_JOHN";
    }
    if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
    {
      MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
    }
  }
}