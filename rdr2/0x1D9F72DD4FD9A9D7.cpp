// dominoes_sp.ysc @ L16437
void func_450(var uParam0, var uParam1, int iParam2)
{
  uParam0->f_410.f_20 = iParam2;
  uParam0->f_410.f_21 = 0;
  uParam0->f_410.f_22 = 0;
  uParam0->f_410.f_23 = 0;
  uParam0->f_410.f_25 = 0;
  uParam0->f_410.f_19 = 0;
  if (uParam0->f_405 != 0)
  {
  }
  if (func_219(uParam1))
  {
    if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_2 && !CAM::_0xA24C1D341C6E0D53(0, 0, 0))
    {
      func_449(&(uParam1->f_199[uParam1->f_194 /*124*/]), 0);
    }
    if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4)
    {
      uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 0;
    }
  }
  func_454(uParam0, 0);
  func_715(uParam0, 1);
  CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
}