// flow_controller.ysc @ L19317
void func_668(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = ((((BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6)) || BUILTIN::SHIFT_LEFT(iParam0, 12)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17));
  iVar1 = CLOCK::GET_CLOCK_YEAR();
  if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
  {
    return;
  }
  if (iVar1 < 1898)
  {
    iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((1898 - iVar1), 26)) | -2147483648;
  }
  else
  {
    iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((iVar1 - 1898), 26));
    iVar0 = (iVar0 - iVar0 & -2147483648);
  }
  Global_1899515 = iVar0;
}