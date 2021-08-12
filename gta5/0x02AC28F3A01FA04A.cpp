// paparazzo2.ysc @ L43490
void func_352(bool bParam0)
{
  if (func_649(PLAYER::PLAYER_PED_ID()))
  {
    if (CAM::DOES_CAM_EXIST(iLocal_2812))
    {
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
      CAM::DESTROY_CAM(iLocal_2812, false);
    }
    if (!bParam0)
    {
      ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
    }
    else
    {
      ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
    }
  }
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(-1f);
  GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}