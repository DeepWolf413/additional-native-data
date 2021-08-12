// fussar1.ysc @ L74823
void func_1893(int iParam0, bool bParam1, int iParam2)
{
  PED::REGISTER_TARGET(iParam0, Global_35, 1);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
  if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
  {
    PED::_0xFC3DB99C8144CD81(iParam0, iParam2, 0, false, 0);
  }
  if (bParam1)
  {
    PED::_0x9238A3D970BBB0A9(iParam0, -2080992549);
  }
  TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 500f, 0, 22);
}