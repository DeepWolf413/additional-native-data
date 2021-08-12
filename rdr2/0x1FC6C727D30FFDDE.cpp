// shop_butcher.ysc @ L24551
void func_731(var uParam0)
{
  if (!CAM::DOES_CAM_EXIST(uParam0->f_21))
  {
    uParam0->f_21 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  }
  CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_21, uParam0->f_8, 0.101f, 1.358f, 0.5381f, true);
  CAM::POINT_CAM_AT_ENTITY(uParam0->f_21, uParam0->f_8, 0.2912f, -1.6309f, 0.3644f, true);
  CAM::SET_CAM_FOV(uParam0->f_21, 37f);
  CAM::_0x1FC6C727D30FFDDE(uParam0->f_21);
}