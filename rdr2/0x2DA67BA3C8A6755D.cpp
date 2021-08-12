// dominoes_sp.ysc @ L2254
void func_71(var uParam0)
{
  if (uParam0->f_409 == 1)
  {
    if (CAM::_0x927B810E43E99932(&(uParam0->f_410)))
    {
      CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_410));
    }
    uParam0->f_409 = 0;
  }
  if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && uParam0->f_407 == 1)
  {
    GRAPHICS::_0xBB6C707F20D955D4(0.25f);
  }
  uParam0->f_407 = 0;
  if (CAM::DOES_CAM_EXIST(uParam0->f_437))
  {
    CAM::DESTROY_CAM(uParam0->f_437, false);
  }
}