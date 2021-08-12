// fishing_core.ysc @ L5283
void func_181(int iParam0, int iParam1)
{
  int iVar0;

  if (iParam0 <= 0 || iParam1 <= 0)
  {
    PAD::SET_PAD_SHAKE(0, 0, 0);
    PAD::_0x14D29BB12D47F68C(0, 0, 0, 0, 0);
  }
  else
  {
    PAD::SET_PAD_SHAKE(0, iParam0, iParam1);
    iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) / 2f));
    PAD::_0x14D29BB12D47F68C(0, 0, 0, iParam0, func_404(iVar0, 0, 255));
  }
}