// beat_drunk_camp.ysc @ L1103
bool func_33()
{
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_485))
  {
    iLocal_485 = TASK::_0xD508FA229F1C4900(iLocal_479, 0f, 0f, 0f, iLocal_249, 3f);
    TASK::SET_SCENARIO_TYPE_ENABLED(sLocal_252, false);
    return false;
  }
  return true;
}