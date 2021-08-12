// abigail2_1.ysc @ L52475
void func_1369(var uParam0)
{
  int iVar0;
  int iVar1;

  CAM::DESTROY_CAM(uParam0->f_2, false);
  uParam0->f_2 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
  iVar0 = 0;
  iVar1 = CLOCK::GET_CLOCK_HOURS();
  if (iVar1 > uParam0->f_6)
  {
    iVar0 = (iVar0 + (iVar1 - uParam0->f_6));
  }
  else
  {
    iVar0 = (iVar0 + (uParam0->f_6 - iVar1));
  }
  iVar0 *= 1000;
  iVar0 += 3000;
  iVar0 = (iVar0 / 2);
  CAM::ADD_CAM_SPLINE_NODE(uParam0->f_2, uParam0->f_8, uParam0->f_8.f_3, iVar0, 3, 2);
  CAM::ADD_CAM_SPLINE_NODE(uParam0->f_2, uParam0->f_8.f_6, uParam0->f_8.f_9, iVar0, 3, 2);
  CAM::SET_CAM_FOV(uParam0->f_2, uParam0->f_8.f_12);
  CAM::SET_CAM_ACTIVE(uParam0->f_2, true);
}