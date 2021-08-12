// short_update.ysc @ L17192
void func_491(var uParam0)
{
  int iVar0;

  func_1572(&(uParam0->f_21));
  iVar0 = 0;
  while (iVar0 < uParam0->f_14)
  {
    func_1574(uParam0, uParam0->f_14[iVar0]);
    uParam0->f_14[iVar0] = 0;
    iVar0++;
  }
  uParam0->f_22 = 0;
  uParam0->f_23 = 0;
  if (uParam0->f_1 == 1)
  {
    GRAPHICS::_0x55285F885F662169();
    GRAPHICS::_0xC2B8164C3BE871A4();
  }
  uParam0->f_1 = 0;
  *uParam0 = 7;
}