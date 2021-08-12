// dominoes_sp.ysc @ L422
bool func_11(int iParam0)
{
  if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
  {
    return false;
  }
  else if (Global_1935630.f_12)
  {
    return false;
  }
  else if (func_18(iParam0, 8))
  {
    return false;
  }
  func_50();
  GRAPHICS::_0x1C6306E5BC25C29C();
  if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
  {
    PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
  }
  PED::SET_PED_RESET_FLAG(Global_35, 184, true);
  PED::SET_PED_RESET_FLAG(Global_35, 175, true);
  func_51(iParam0, 1);
  PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 41, 1);
  Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
  return true;
}