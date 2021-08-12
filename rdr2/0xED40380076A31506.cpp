// startup_sp.ysc @ L2073
bool func_90(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
  {
    if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
    {
      PED::_REMOVE_PED_FROM_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true, false);
      return false;
    }
  }
  STREAMING::REQUEST_MODEL(iParam0, false);
  if (!STREAMING::HAS_MODEL_LOADED(iParam0))
  {
    return false;
  }
  PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iParam0, true);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
  Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
  func_185(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0);
  func_186(iParam0, -1);
  Global_40.f_39 = iParam0;
  Global_1935630.f_2 = iParam0;
  func_187(2, 0, 2, 0, 0);
  return true;
}