// act_fishing06.ysc @ L31737
void func_893(int iParam0)
{
  if (CAM::DOES_CAM_EXIST(iParam0->f_78))
  {
    if (CAM::IS_CAM_RENDERING(iParam0->f_78))
    {
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
      CAM::SET_CAM_ACTIVE(iParam0->f_78, false);
    }
    CAM::DESTROY_CAM(iParam0->f_78, false);
  }
  if (func_201(iParam0->f_144))
  {
    func_62(&(iParam0->f_144));
  }
  func_1209(&(iParam0->f_3), 3);
}