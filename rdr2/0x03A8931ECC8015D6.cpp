// gang2.ysc @ L83591
float func_2343()
{
  int iVar0;

  if (func_1867())
  {
    iVar0 = CAM::GET_RENDERING_CAM();
    if (CAM::DOES_CAM_EXIST(iVar0))
    {
      return CAM::GET_CAM_FOV(iVar0);
    }
  }
  return CAM::GET_GAMEPLAY_CAM_FOV();
}