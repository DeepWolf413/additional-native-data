// braithwaites2.ysc @ L52059
void func_1241(var uParam0)
{
  if (!func_180(32768))
  {
    if (func_251(95))
    {
      func_1775(95);
      func_1776(iLocal_815, 0, 0);
      func_1292(32768);
    }
  }
  else if (!func_251(95))
  {
    func_1777(32768);
  }
  else
  {
    POPULATION::_0xF45E46DEECF7DF6E(8192, 0, 0, -1, -1);
    POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
    POPULATION::_0xF45E46DEECF7DF6E(1048576, 0, 0, -1, -1);
    PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(0f);
    VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
    PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
    PED::_0xBA0980B5C0A11924(0f);
  }
}