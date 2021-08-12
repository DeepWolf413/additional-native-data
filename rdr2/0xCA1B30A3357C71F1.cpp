// rcm_gunslinger1_2.ysc @ L12107
void func_395()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (CAM::DOES_CAM_EXIST(Local_33.f_20[iVar0]))
    {
      CAM::STOP_CAM_POINTING(Local_33.f_20[iVar0]);
      CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
    }
    iVar0++;
  }
}