// benchmark.ysc @ L879
void func_30()
{
  if (iLocal_189 == 1 && func_540(iLocal_169))
  {
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_169))
    {
      VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_169, iLocal_191, sLocal_192, true);
    }
    else
    {
      VEHICLE::SET_PLAYBACK_SPEED(iLocal_169, 0.7f);
      PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
      PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
      PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
    }
  }
}