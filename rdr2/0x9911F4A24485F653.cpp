// finale3.ysc @ L16485
void func_109(var uParam0)
{
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  PED::_0xAB0D553FE20A6E25(0f);
  PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
  PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
  PED::_0x9911F4A24485F653(true);
  if (STREAMING::_0x8A3945405B31048F() != 0f)
  {
    func_379(0f);
  }
  func_380(uParam0, -1645.043f, -1342.291f, 82.9695f, 162.0072f);
  GRAPHICS::_0x5199405EABFBD7F0("Mission_EndCredits");
}