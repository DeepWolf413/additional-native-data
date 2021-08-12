// am_casino_limo.ysc @ L17175
void func_356(var uParam0)
{
  if (CAM::DOES_CAM_EXIST(uParam0->f_387))
  {
    if (CAM::IS_CAM_ACTIVE(uParam0->f_387))
    {
      CAM::SET_CAM_ACTIVE(uParam0->f_387, false);
    }
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
    CAM::STOP_CAM_SHAKING(uParam0->f_387, true);
    CAM::DESTROY_CAM(uParam0->f_387, false);
  }
}