// armenian1.ysc @ L53284
void func_508(bool bParam0)
{
  if (bParam0)
  {
    if (iLocal_2908 == 0)
    {
      iLocal_2908 = PED::ADD_SCENARIO_BLOCKING_AREA(-1196.229f, -575.1415f, 0.879524f, -1035.999f, -474.7514f, 68.87952f, false, true, true, true);
    }
    PATHFIND::SET_PED_PATHS_IN_AREA(-1714.315f, -567.0828f, 30.83458f, -1680.67f, -557.9427f, 39.83458f, false, 0);
    PATHFIND::SET_PED_PATHS_IN_AREA(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, false, 0);
    PATHFIND::SET_PED_PATHS_IN_AREA(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, false, 0);
    PATHFIND::SET_PED_PATHS_IN_AREA(-1287.162f, -651.963f, 25.4564f, -1256.621f, -625.6708f, 29.6292f, false, 0);
    PED::SET_PED_NON_CREATION_AREA(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f);
  }
  else
  {
    if (iLocal_2908 != 0)
    {
      PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2908, false);
      iLocal_2908 = 0;
    }
    if (iLocal_2909 != 0)
    {
      PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2909, false);
      iLocal_2909 = 0;
    }
    PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1714.315f, -567.0828f, 30.83458f, -1680.67f, -557.9427f, 39.83458f, 0);
    PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, 0);
    PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, 0);
    PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1287.162f, -651.963f, 25.4564f, -1256.621f, -625.6708f, 29.6292f, 0);
    PED::CLEAR_PED_NON_CREATION_AREA();
  }
}