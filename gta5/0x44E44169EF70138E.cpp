// appcamera.ysc @ L1043
void func_1(int iParam0)
{
  if (func_2())
  {
    if (iParam0 == 1)
    {
      MOBILE::_CELL_CAM_SET_LEAN(true);
    }
    else if (Global_19798.f_1 > 3)
    {
      MOBILE::_CELL_CAM_SET_LEAN(false);
    }
  }
}