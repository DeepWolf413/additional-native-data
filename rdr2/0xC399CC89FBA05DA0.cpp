// ambush_exc_wagon_turret.ysc @ L1645
void func_49()
{
  char* sVar0;
  char* sVar1;

  sVar0 = func_189(&Local_274);
  sVar1 = func_190(&Local_274);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    TASK::REMOVE_WAYPOINT_RECORDING(sVar0);
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
  {
    TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
  }
  if (func_61(Local_15[5], 0, 0))
  {
    PED::_0xAE6004120C18DF97(Local_15[5], 0, 1);
  }
  VEHICLE::_0xC399CC89FBA05DA0(Local_15.f_49[0], 1);
  if (!func_30(&Local_15, 16384))
  {
    if (func_145(&(Local_274.f_5), 4096))
    {
      func_191();
    }
  }
}