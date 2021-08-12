// beat_lost_dog.ysc @ L4177
void func_104()
{
  if (!func_18(iLocal_900, 262144) || func_18(iLocal_900, 1073741824 /* Float: 2f */))
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_474))
  {
    return;
  }
  else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_474))
  {
    TASK::REQUEST_WAYPOINT_RECORDING(sLocal_474);
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_501[2]))
  {
    func_337();
    PED::SET_PED_RESET_FLAG(iLocal_501[2], 170, true);
  }
  if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_501[2]))
  {
    PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_501[2], 0);
    ENTITY::SET_ENTITY_COORDS(iLocal_501[2], 0f, 0f, 0f, true, false, true, true);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_501[2], true);
    func_90(&iLocal_900, 1073741824 /* Float: 2f */);
  }
  if (func_338(iLocal_501[2], sLocal_474, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
  {
  }
}