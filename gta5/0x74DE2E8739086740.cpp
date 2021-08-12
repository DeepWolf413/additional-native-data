// agency_heist2.ysc @ L20415
void func_323()
{
  if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      func_326();
    }
    return;
  }
  if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
  {
    func_326();
    return;
  }
  func_324();
  if (Global_99093 > 0)
  {
    return;
  }
  STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
}