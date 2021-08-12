// bathing.ysc @ L9375
void func_301(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = PLAYER::PLAYER_PED_ID();
  if (iParam0 == 0)
  {
    return;
  }
  else if (iParam0 == -1)
  {
    iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
  }
  iVar1 = func_383(2);
  func_384(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}