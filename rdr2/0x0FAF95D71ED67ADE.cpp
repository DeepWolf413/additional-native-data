// finale2.ysc @ L35876
bool func_780(var uParam0)
{
  if (func_8(uParam0, 8))
  {
    func_219(&(vLocal_1072[0 /*3*/]));
  }
  Local_171[1 /*14*/].f_3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_171[1 /*14*/]);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_56, 1, 0.5f, 1f, 1);
  TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(sLocal_56, 8);
  func_1313(1854467923);
  func_182(1854467923, 1, 0f, 0, 0, 0f, 0, 0);
  PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
  func_424(&iLocal_69, 1073741824 /* Float: 2f */);
  func_182(1821044729, 1, 0, 0, 0, 0, 0, 0);
  func_182(1514359658, 1, 0, 0, 0, 0, 0, 0);
  if (func_8(uParam0, 8))
  {
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, func_1305());
  }
  PLAYER::_0x0FAF95D71ED67ADE(PLAYER::PLAYER_ID(), "INTERACT_BEAT");
  ANIMSCENE::START_ANIM_SCENE(iLocal_72[11]);
  return uParam0->f_607 == uParam0->f_607;
}