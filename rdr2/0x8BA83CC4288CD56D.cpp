// finale1.ysc @ L86141
void func_2165()
{
  PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 224, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 258, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 224, true);
  AUDIO::STOP_PED_SPEAKING(Global_35, true);
  PED::_SET_PED_BRAWLING_STYLE(Global_35, joaat("BS_PLAYER_FINALE"));
}