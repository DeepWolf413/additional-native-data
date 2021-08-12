// act_hunting_2.ysc @ L34600
void func_952()
{
  if (func_29(Global_35, 0))
  {
    PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
    PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
    PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
    PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 1);
  }
}