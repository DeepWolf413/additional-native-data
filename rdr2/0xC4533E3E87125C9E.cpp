// guama3.ysc @ L18060
int func_109(char[4] cParam0)
{
  func_371(cParam0);
  func_372(cParam0, 25);
  POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
  POPULATION::_0xC4533E3E87125C9E(0f);
  PED::_0xAB0D553FE20A6E25(0f);
  PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  func_373(cParam0);
  func_374(cParam0);
  switch (func_33(cParam0))
  {
    case 0:
      func_375();
      if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RIFLE_BOLTACTION"), 0, false))
      {
        func_376(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RIFLE_BOLTACTION"), joaat("AMMO_RIFLE"), 100, 1, 0);
        WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RIFLE_BOLTACTION"), true, 9, false, false);
      }
      else if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RIFLE_BOLTACTION"), 0, true))
      {
        WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RIFLE_BOLTACTION"), true, 9, false, false);
      }
      break;
  }
  return 1;
}