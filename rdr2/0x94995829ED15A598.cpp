// annesburg.ysc @ L6319
bool func_187(var uParam0)
{
  int iVar0;
  vector3 vVar1;

  iVar0 = PERSCHAR::_0x112DDF56300BC6E5(func_184(uParam0->f_1));
  if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
  {
    vVar1 = { PERSCHAR::_0x94995829ED15A598(iVar0) };
    if (BUILTIN::VDIST2(uParam0->f_13, vVar1) < 9f)
    {
      return true;
    }
  }
  return false;
}