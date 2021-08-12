// extreme1.ysc @ L45835
void func_488()
{
  if (func_164(iLocal_352))
  {
    func_490(iLocal_352, &iLocal_351, iLocal_337[0], -1);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_337[0]);
    func_489(iLocal_351);
    PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_351, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_351, 134, true);
    func_163(&uLocal_357, 4, iLocal_351, "EXT1HELIPILOT", 0, 1);
  }
}