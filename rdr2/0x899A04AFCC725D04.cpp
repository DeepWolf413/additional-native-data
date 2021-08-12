// ambush_bnd_cliff1.ysc @ L3193
void func_127(var uParam0, int iParam1, int iParam2, bool bParam3)
{
  int iVar0;

  iVar0 = 0;
  iVar0 = func_263(uParam0->f_181, iParam2, bParam3);
  if (iVar0 != 0)
  {
    WEAPON::_0x899A04AFCC725D04(iParam1, iVar0);
  }
  else if (bParam3)
  {
    func_264(iParam1, iParam2, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
  }
  else
  {
    func_264(iParam1, iParam2, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
  }
}