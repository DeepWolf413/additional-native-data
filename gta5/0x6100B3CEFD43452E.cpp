// am_mp_submarine.ysc @ L345233
void func_5577(int iParam0)
{
  TASK::_CLEAR_VEHICLE_TASKS(iParam0);
  TASK::_0x6100B3CEFD43452E(PLAYER::PLAYER_PED_ID());
  VEHICLE::_SET_DISABLE_SUPERDUMMY_MODE(iParam0, false);
  VEHICLE::_0xC67DB108A9ADE3BE(iParam0, 0);
  ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam0, false);
  func_5555("SUB_AUTO_DEAC", 0);
}