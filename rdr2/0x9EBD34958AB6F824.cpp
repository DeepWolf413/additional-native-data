// beat_bounty_transport.ysc @ L5758
void func_145()
{
  vector3 vVar0;
  float fVar3;

  vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_561[2], true, false) + Vector(-1f, 0f, 0f) };
  fVar3 = ENTITY::GET_ENTITY_HEADING(uLocal_561[2]);
  func_360(&vVar0, 50, 10, 0);
  ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_767, vVar0, 0f, 0f, fVar3, 2);
  TASK::_0x9EBD34958AB6F824(uLocal_561[2]);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_767, "CRIMINAL", uLocal_561[2], 0);
  ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_767, "player", Global_35, 0);
  ANIMSCENE::START_ANIM_SCENE(iLocal_767);
  func_33(512);
}