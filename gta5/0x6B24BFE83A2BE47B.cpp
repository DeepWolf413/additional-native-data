// am_mp_defunct_base.ysc @ L361119
void func_5855(var uParam0, var uParam1, int iParam2)
{
  if (iParam2 && uParam0->f_1)
  {
    uParam0->f_1 = 0;
  }
  if (iParam2 && uParam0->f_2)
  {
    uParam0->f_2 = 0;
  }
  if (CAM::IS_CAM_SHAKING(uParam1->f_11))
  {
    CAM::STOP_CAM_SHAKING(uParam1->f_11, false);
  }
  PAD::STOP_PAD_SHAKE(0);
  MISC::CLEAR_BIT(&(uParam1->f_12), 8);
  MISC::CLEAR_BIT(&(uParam1->f_12), 10);
  MISC::CLEAR_BIT(&(uParam1->f_12), 9);
  func_197(&(uParam1->f_786));
}