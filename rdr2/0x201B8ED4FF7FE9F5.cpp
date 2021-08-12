// marston7.ysc @ L34599
bool func_763(var uParam0)
{
  func_1337();
  func_1338();
  ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_181, vLocal_188, vLocal_188, 2);
  ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_181, iLocal_126, 0);
  ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_179, vLocal_188, vLocal_188, 2);
  ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_179, iLocal_118, 0);
  VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_118, true);
  PED::SET_PED_LEG_IK_MODE(iLocal_112, 0);
  VEHICLE::_0x201B8ED4FF7FE9F5(iLocal_126);
  iLocal_237 = func_1339(408396114, iLocal_118, 1);
  if (func_120(uParam0, 4))
  {
    func_1319(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
  }
  func_134(uParam0, 0);
  func_135(uParam0, 1);
  return uParam0->f_607 == uParam0->f_607;
}