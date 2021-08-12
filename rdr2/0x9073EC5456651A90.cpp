// marston1.ysc @ L37423
void func_835(bool bParam0)
{
  if (func_832(bLocal_539))
  {
    return;
  }
  func_834();
  if (!func_455(bLocal_540, 0))
  {
    return;
  }
  if (bParam0)
  {
    PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), bLocal_540, 10, 0, 1);
  }
  else
  {
    PLAYER::_0x9073EC5456651A90(PLAYER::GET_PLAYER_INDEX(), bLocal_540);
  }
}