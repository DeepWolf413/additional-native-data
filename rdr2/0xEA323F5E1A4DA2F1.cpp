// mudtown3.ysc @ L79592
void func_2135(bool bParam0)
{
  if (bParam0)
  {
    TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "MUD3_C_HELP");
  }
  else
  {
    TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "MUD3_C_KILL");
  }
}