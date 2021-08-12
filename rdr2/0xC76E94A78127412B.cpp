// mudtown1.ysc @ L54295
void func_1325(char* sParam0, int iParam1)
{
  TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1, &(vLocal_602[0 /*3*/]));
  TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1 + 2, &(vLocal_602[1 /*3*/]));
  func_1788(4, vLocal_602[0 /*3*/], vLocal_602[1 /*3*/]);
  ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
  VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[4], 1.401298E-45f);
  VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 5.5f);
  ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_423[4], true);
  ENTITY::_0xC76E94A78127412B(iLocal_423[4], 1f, 2f);
  ENTITY::_0x29BA9F78321E5A6C(iLocal_423[4], sParam0, 0, 0.35f, 0.15f, 1, 0, 0, 0, 0, 0, 1);
}