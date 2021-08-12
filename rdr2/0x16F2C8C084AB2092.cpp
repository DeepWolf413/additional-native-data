// bathing.ysc @ L9328
void func_299(int iParam0)
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
    iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
  }
  iVar1 = func_380(2);
  func_381(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}