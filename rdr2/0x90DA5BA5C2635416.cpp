// dominoes_sp.ysc @ L16561
void func_458(var uParam0, var uParam1)
{
  uParam0->f_410.f_21 = 1;
  uParam0->f_410.f_22 = 0;
  uParam0->f_410.f_23 = 0;
  uParam0->f_410.f_25 = 0;
  uParam0->f_410.f_19 = 0;
  if (uParam0->f_405 != 1)
  {
  }
  if (func_219(uParam1))
  {
    if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 == 0)
    {
      uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 1;
    }
  }
  func_715(uParam0, 0);
  func_454(uParam0, 1);
  CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
  CAM::_0x90DA5BA5C2635416();
}