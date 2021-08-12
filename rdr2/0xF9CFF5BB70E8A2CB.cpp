// rcm_oh_brother3.ysc @ L3188
int func_107(var uParam0)
{
  POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
  switch (iLocal_113)
  {
    case 0:
      func_287(uParam0, 1);
      func_321(uParam0);
      break;
    case 1:
      CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
      func_318(&iLocal_101);
      func_318(&iLocal_38);
      func_287(uParam0, 1);
      return 5;
    case 2:
      func_322(uParam0);
      break;
    case 3:
      if (func_323())
      {
        func_324(0, 0);
      }
      func_287(uParam0, 2);
      PED::SET_PED_WETNESS_HEIGHT(uLocal_14[0], 1f);
      PED::SET_PED_WETNESS_HEIGHT(uLocal_14[1], 1f);
      PED::_0xF9CFF5BB70E8A2CB(uLocal_14[0], 1f);
      PED::_0xF9CFF5BB70E8A2CB(uLocal_14[1], 1f);
      return 5;
  }
  return 7;
}