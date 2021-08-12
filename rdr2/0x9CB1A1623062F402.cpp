// abigail2_1.ysc @ L40433
void func_999(var uParam0)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1490(func_1489(255), joaat("COLOR_PURE_WHITE")));
  }
  else if (func_296())
  {
    MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
  }
  else
  {
    func_1026();
    MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
  }
}