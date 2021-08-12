// aberdeenpigfarm.ysc @ L5014
int func_218(struct<2> Param0, var uParam2)
{
  int iVar0;

  iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
  if (Param0 > 0f)
  {
    iVar0 |= 1073741824;
  }
  if (Param0.f_1 > 0f)
  {
    iVar0 |= -2147483648;
  }
  return iVar0;
}