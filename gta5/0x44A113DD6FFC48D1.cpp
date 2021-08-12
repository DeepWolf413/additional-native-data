// am_mp_casino_nightclub.ysc @ L369235
void func_5277(var uParam0)
{
  func_5274(uParam0);
  CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("NIGHTCLUB_FOLLOW_PED_CAMERA", 1000);
  func_5273(uParam0);
  if (func_5267(uParam0, 0, 15000))
  {
    func_5280(uParam0, 1, uParam0->f_950);
    func_5266(uParam0, 12);
    return;
  }
  if (!func_5253(uParam0))
  {
    if (func_5278(uParam0) == 13)
    {
      return;
    }
  }
  func_5280(uParam0, 1, uParam0->f_950);
  func_5266(uParam0, 12);
}