// beat_intimidation_tactics.ysc @ L9931
void func_310(int* iParam0, vector3 vParam1, var uParam4, var uParam5)
{
  int iVar0;

  if (MISC::CREATE_INCIDENT(6, vParam1, 5, 120f, iParam0, -1082130432 /* Float: -1f */, 1))
  {
  }
  if (MISC::IS_INCIDENT_VALID(*iParam0))
  {
  }
  iVar0 = 0;
  while (iVar0 < *uParam4)
  {
    if (VOLUME::_DOES_VOLUME_EXIST((*uParam4)[iVar0]))
    {
      POPULATION::_0x74C2B3DC0B294102((*uParam4)[iVar0]);
      PED::REMOVE_SCENARIO_BLOCKING_AREA((*uParam5)[iVar0], false);
    }
    iVar0++;
  }
}