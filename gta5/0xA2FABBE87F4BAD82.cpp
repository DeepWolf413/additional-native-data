// am_mp_property_int.ysc @ L534281
void func_8242()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (!CAM::DOES_CAM_EXIST(Local_10088.f_80[iVar0]))
    {
      Local_10088.f_80[iVar0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
    }
    if (Local_10088.f_19[iVar0])
    {
      CAM::DETACH_CAM(Local_10088.f_80[iVar0]);
      CAM::STOP_CAM_POINTING(Local_10088.f_80[iVar0]);
      Local_10088.f_19[iVar0] = 0;
    }
    iVar0++;
  }
}