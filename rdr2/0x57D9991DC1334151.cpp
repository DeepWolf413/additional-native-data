// bathing.ysc @ L9393
void func_302(int iParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = PLAYER::PLAYER_ID();
  if (iParam0 == 0)
  {
    return;
  }
  else if (iParam0 == -1)
  {
    iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
  }
  iVar1 = func_385(2);
  func_386(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}