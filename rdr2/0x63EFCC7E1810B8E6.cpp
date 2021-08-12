// beechers2_2.ysc @ L53639
void func_1254()
{
  int iVar0;

  CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
  iVar0 = 0;
  while (iVar0 < iLocal_829)
  {
    if (CAM::DOES_CAM_EXIST(iLocal_829[iVar0]))
    {
      if (CAM::IS_CAM_ACTIVE(iLocal_829[iVar0]))
      {
        CAM::SET_CAM_ACTIVE(iLocal_829[iVar0], false);
      }
      func_1670(iVar0);
    }
    iVar0++;
  }
}