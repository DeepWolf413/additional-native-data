// golf.ysc @ L108603
void func_850(var uParam0, int* iParam1, var uParam2, var uParam3)
{
  if (!CAM::DOES_CAM_EXIST(iParam1->f_535))
  {
    if (bLocal_45)
    {
    }
    func_851(uParam2, uParam3, iParam1);
    CAM::SET_CAM_FOV(iParam1->f_535, 45f);
    CAM::SHAKE_CAM(iParam1->f_535, "HAND_SHAKE", 0.5f);
    GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
    GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
    func_551(uParam0, 134217728);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
  else if (!ENTITY::IS_ENTITY_ON_SCREEN(func_1205(uParam3)))
  {
    CAM::SET_CAM_COORD(iParam1->f_535, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_1205(uParam3), true), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 6.5f, -1f, 2.5f));
    CAM::POINT_CAM_AT_ENTITY(iParam1->f_535, func_1205(uParam3), 0f, 0f, 0f, true);
  }
}