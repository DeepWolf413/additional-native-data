// act_cinema.ysc @ L115260
void func_1117(bool bParam0, bool bParam1)
{
  if (!bParam0)
  {
    CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
  }
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
  }
  if (!bParam1)
  {
    STREAMING::CLEAR_FOCUS();
  }
  if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
  {
    PLAYER::STOP_PLAYER_TELEPORT();
  }
  func_1101();
  if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 14) && !func_73())
  {
    func_1118();
  }
}