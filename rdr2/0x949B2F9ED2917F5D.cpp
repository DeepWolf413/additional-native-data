// bounty1.ysc @ L17359
void func_163()
{
  if (func_424(Global_35, 0))
  {
    AUDIO::STOP_PED_SPEAKING(Global_35, false);
    PED::SET_PED_CONFIG_FLAG(Global_35, 4, false);
    PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
    PED::_0x949B2F9ED2917F5D(Global_35, 2);
    PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
  }
}