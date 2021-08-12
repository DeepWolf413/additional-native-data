// abigail2_1.ysc @ L58135
void func_1542(bool bParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = 50;
  iVar1 = PLAYER::PLAYER_ID();
  if (bParam0)
  {
    PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
    PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
  }
  else
  {
    PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
    PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
  }
}