// beat_torturing_captive.ysc @ L3322
void func_76()
{
  if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_529, false))
  {
    iLocal_858 = PHYSICS::ADD_ROPE(PED::GET_PED_BONE_COORDS(uLocal_46[2], 37709, 0f, 0f, 0f), 0f, 0f, 0f, 1.5f, 6, 0.5f, 0.5f, 1056964608, false, true, true, 1f, false, 0, true);
    PHYSICS::_0x7A54D82227A139DB(&iLocal_858, 1);
    PHYSICS::_0x522FA3F490E2F7AC(iLocal_858, 0, 1);
    PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_858, uLocal_46[2], uLocal_46[2], 0f, 0f, 0f, 0f, 0f, 0f, fLocal_861, 0, 0, 0, 0, 0, 37709, 7966, 0, 0, 1, 1);
    PHYSICS::_0xFB9153A54AC713E8(iLocal_858, 1);
    AUDIO::_0xF092B6030D6FD49C(iLocal_858, "ROPE_SETTINGS_DEFAULT");
    func_73(1);
  }
  ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[2], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[2], true);
  func_243();
  func_244();
  func_245();
}