// abigail2_1.ysc @ L72880
void func_2104(var uParam0)
{
  int iVar0;
  vector3 vVar1;

  uParam0->f_1 = 0;
  iVar0 = 0;
  while (iVar0 < uParam0->f_134)
  {
    if (PED::_0x93FFD92F05EC32FD(uParam0->f_135[iVar0 /*2*/]))
    {
      PED::_0x13E7320C762F0477(uParam0->f_135[iVar0 /*2*/]);
    }
    uParam0->f_135[iVar0 /*2*/].f_1 = -1;
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < 39)
  {
    uParam0->f_1.f_1[iVar0 /*3*/] = { vVar1 };
    iVar0++;
  }
  func_1571(&(uParam0->f_120));
  uParam0->f_134 = 0;
  *uParam0 = 0;
}