// cv_cc_abi_08.ysc @ L6075
void func_199(var uParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (iParam2 <= 0 || iParam2 > 600)
  {
    return;
  }
  iVar0 = func_110(iParam1);
  iVar1 = BUILTIN::ROUND(((1000f * IntToFloat(iParam2)) / 4000f));
  iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) / 60f));
  iVar1 = (iVar1 % 60);
  if (PED::_0xCB86D3E3E3708901(iVar0, uParam0->f_1690, iVar2, iVar1, 0))
  {
  }
}