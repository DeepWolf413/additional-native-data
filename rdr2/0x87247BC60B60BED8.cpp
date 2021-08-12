// finale1.ysc @ L40034
bool func_863(var uParam0)
{
  func_1391(1);
  func_176(uParam0, Local_225[1 /*9*/], 1);
  if (func_493(uLocal_425, 131072))
  {
    TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_1508[8], 0, 1065353216 /* Float: 1f */, 0.5f, 1);
    func_503(&uLocal_425, 131072);
  }
  func_1378(&(Local_317[0 /*9*/].f_1), 0);
  func_1378(&(Local_317[1 /*9*/].f_1), 0);
  if (ENTITY::DOES_ENTITY_EXIST(Local_317[0 /*9*/]))
  {
    TASK::CLEAR_PED_TASKS(Local_317[0 /*9*/], true, false);
    func_275(uParam0, Local_317[0 /*9*/].f_8, Local_317[0 /*9*/], 0, 1, 1, 0);
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_317[1 /*9*/]))
  {
    TASK::CLEAR_PED_TASKS(Local_317[1 /*9*/], true, false);
    func_275(uParam0, Local_317[1 /*9*/].f_8, Local_317[1 /*9*/], 0, 1, 1, 0);
  }
  func_1529(24, 1);
  func_1529(25, 1);
  func_1043(24);
  func_1043(25);
  PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 1f);
  PED::_0x87247BC60B60BED8(iLocal_435);
  iLocal_435 = -1;
  func_465(iLocal_1646[34]);
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  return uParam0->f_607 == uParam0->f_607;
}