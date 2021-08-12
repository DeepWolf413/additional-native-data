// beat_taunting.ysc @ L1643
void func_36()
{
  if (func_42(134217728))
  {
    if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_1059[0 /*15*/]))
    {
      TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Local_1059[0 /*15*/], 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
    }
  }
}