// train_robbery1.ysc @ L57109
void func_1289()
{
  if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_118, true, false), 10f) && !func_1206(8388608))
  {
    if (!func_26(&uLocal_3568))
    {
      func_1207(8388608);
      MISC::SET_TIME_SCALE(0.35f);
      func_219(&uLocal_3568);
      ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_118, 1, 0f, -2f, 4.5f, 0f, 0f, 0f, 0, false, false, true, false, true);
      MISC::_0x4D5C9CC7E7E23E09();
    }
  }
  else if (func_26(&uLocal_3568) && func_858(&uLocal_3568) > 1f)
  {
    MISC::SET_TIME_SCALE(1f);
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    CAM::DESTROY_CAM(uLocal_3580[0], false);
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
    func_438(&uLocal_3568);
  }
}