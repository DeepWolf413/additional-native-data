// beat_hunter.ysc @ L4372
void func_143()
{
  if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_57()))
  {
    PED::SET_PED_RESET_FLAG(uLocal_225[1], 170, true);
    PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uLocal_225[1], 0);
    if (func_338(uLocal_225[1], func_57(), 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
    {
      func_95(16384);
    }
  }
}