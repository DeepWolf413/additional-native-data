// gang1.ysc @ L17424
void func_164()
{
  if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && func_165(Global_35, 0))
  {
    PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 159, false);
    PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
    AUDIO::_0x4BE3EC91C01F0FE8();
    PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
  }
}