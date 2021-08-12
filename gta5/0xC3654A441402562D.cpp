// fm_mission_controller.ysc @ L637846
void func_10498(int iParam0)
{
  if (CAM::DOES_CAM_EXIST(iParam0))
  {
    CAM::SET_CAM_MOTION_BLUR_STRENGTH(iParam0, fLocal_50030);
    func_10484(0);
    CAM::_SET_CAM_DOF_FNUMBER_OF_LENS(iParam0, fLocal_50034);
    CAM::_SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(iParam0, fLocal_50033);
    CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(iParam0, Local_50003.f_2);
    CAM::_SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(iParam0, fLocal_50035);
    CAM::SET_CAM_DOF_STRENGTH(iParam0, fLocal_50031);
  }
}