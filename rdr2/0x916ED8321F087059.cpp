// grays2.ysc @ L35817
int func_775(char[4] cParam0)
{
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  HUD::CLEAR_ALL_HELP_MESSAGES();
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_360))
  {
    OBJECT::DELETE_OBJECT(&iLocal_360);
  }
  PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
  func_168(1);
  PHYSICS::_0xBDDA142759307528(iLocal_432[0]);
  PHYSICS::_0xBDDA142759307528(iLocal_432[2]);
  PHYSICS::_0xBDDA142759307528(iLocal_432[1]);
  PHYSICS::_0xBDDA142759307528(uLocal_426[0]);
  PHYSICS::_0xBDDA142759307528(uLocal_426[1]);
  PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_426[1], 93, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_426[1], 54, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_426[1], 249, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_426[0], 93, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_426[0], 54, true);
  PED::SET_PED_CONFIG_FLAG(uLocal_426[0], 249, false);
  PED::SET_PED_CONFIG_FLAG(func_174(cParam0), 300, false);
  PED::SET_PED_CONFIG_FLAG(func_174(cParam0), 441, false);
  TASK::TASK_CLEAR_LOOK_AT(uLocal_426[1]);
  TASK::TASK_CLEAR_LOOK_AT(uLocal_426[0]);
  func_448(cParam0, uLocal_426[1], 1);
  func_437(&iLocal_440);
  return 1;
}