// bailbond1.ysc @ L40974
void func_398(bool bParam0, var uParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  
  Var0 = { 2711.198f, 4134.425f, 32.90168f };
  Var3 = { 2739.981f, 4155.221f, 50.28859f };
  if (bParam0)
  {
    *uParam1 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, false, true, true, true);
    PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
    VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, false, true);
    VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var0, Var3, 0);
    PATHFIND::SET_ROADS_IN_AREA(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, false, true);
    MISC::CLEAR_AREA(2728.333f, 4144.778f, 43.29292f, 7.5f, true, false, false, false);
  }
  else
  {
    PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
    PED::CLEAR_PED_NON_CREATION_AREA();
    VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, true, true);
    PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
  }
}