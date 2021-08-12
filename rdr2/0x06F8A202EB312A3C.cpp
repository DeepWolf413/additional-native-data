// braithwaites1.ysc @ L37105
bool func_801(var uParam0)
{
  CLOCK::PAUSE_CLOCK(false, 0);
  if (!Local_218[1 /*8*/].f_3 == 8)
  {
    func_933(uParam0, 1, 7, 0, 1, 1, func_555(8, 3), 1);
    return false;
  }
  func_191(1);
  func_522(47);
  func_522(36);
  func_173(1, 1);
  func_173(2, 1);
  func_482(0, 1);
  if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_979[0], false) && PED::_GET_SEAT_PED_IS_USING(Global_35) == -1)
  {
    PHYSICS::_0x31160EC47E7C9549(iLocal_979[0], 1);
  }
  VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_979[0], 5, true, true, true);
  func_165(0);
  func_927();
  func_175(1);
  func_1267();
  return uParam0->f_607 == uParam0->f_607;
}