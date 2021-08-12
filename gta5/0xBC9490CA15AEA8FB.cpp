// am_distract_cops.ysc @ L4849
void func_196()
{
  if (func_9(&uLocal_230, 10000, 0))
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_77.f_16)
    {
      PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_77.f_16, false);
      PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
    }
    PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
  }
}