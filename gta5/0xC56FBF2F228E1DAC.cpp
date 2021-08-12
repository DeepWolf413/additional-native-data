// am_hunt_the_beast.ysc @ L91889
void func_398(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  struct<14> Var2;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar0 = func_397(2103, iParam0, 0);
  if (iVar0 < 1)
  {
    iVar1 = func_397(2053, iParam0, 0);
    if (bParam1)
    {
      iVar16 = joaat("mp_m_freemode_01");
      iVar1 = func_168(iVar1);
    }
    else
    {
      iVar16 = joaat("mp_f_freemode_01");
      iVar1 = func_166(iVar1);
    }
    Var2 = { func_224(iVar16, 2, iVar1, -1) };
    iVar17 = PED::_0xC56FBF2F228E1DAC(iVar16, Var2.f_3, Var2.f_4);
    iVar18 = PED::_0xEA9960D07DADCF10(iVar17);
    func_269(2153, iVar17, iParam0, 1, 0);
    func_269(2160, iVar18, iParam0, 1, 0);
  }
}