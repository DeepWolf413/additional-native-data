// finale_heist2b.ysc @ L121528
void func_808()
{
  PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
  PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
  PLAYER::SET_POLICE_RADAR_BLIPS(false);
  MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, 0);
  PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
  PED::SET_CREATE_RANDOM_COPS(false);
  MISC::ENABLE_DISPATCH_SERVICE(3, false);
  MISC::ENABLE_DISPATCH_SERVICE(1, false);
  MISC::ENABLE_DISPATCH_SERVICE(5, false);
}