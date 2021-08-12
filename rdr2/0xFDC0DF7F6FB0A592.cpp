// mob4.ysc @ L70634
void func_1949()
{
  if (bLocal_1100 == 0)
  {
    CAM::SET_CAM_PARAMS(iLocal_1118, vLocal_59, vLocal_59, fLocal_1102, 0, 1, 1, 2, 1, 0);
    CAM::ATTACH_CAM_TO_ENTITY(iLocal_1118, iLocal_114, vLocal_1109, true);
    CAM::POINT_CAM_AT_ENTITY(iLocal_1118, iLocal_114, vLocal_1112, true);
    CAM::SET_CAM_ACTIVE(iLocal_1118, true);
    CAM::RENDER_SCRIPT_CAMS(true, true, 1000, true, false, 0);
    bLocal_1100 = true;
  }
}