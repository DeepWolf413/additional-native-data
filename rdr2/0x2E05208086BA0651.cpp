// abigail2_1_intro.ysc @ L3546
void func_159(var uParam0, int iParam1, bool bParam2)
{
  if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
  {
    return;
  }
  PED::CLEAR_PED_NON_CREATION_AREA();
  POPULATION::_0xA1CFB35069D23C23(iParam1);
  POPULATION::_0x74C2B3DC0B294102(iParam1);
  if (PED::_0x91A5F9CBEBB9D936(*uParam0))
  {
    PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
  }
}