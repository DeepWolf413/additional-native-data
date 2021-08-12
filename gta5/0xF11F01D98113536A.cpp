// gb_smuggler.ysc @ L82781
int func_1702()
{
  float fVar0;
  int iVar1;
  int iVar2;
  
  if (!func_114(136))
  {
    if (func_1021(PLAYER::PLAYER_ID()) && !STATS::_0x8B9CDBD6C566C38C())
    {
      STATS::_0x33D72899E24C3365(20, 1);
      func_3674(136);
    }
  }
  else
  {
    STATS::_0xF11F01D98113536A(&fVar0);
    iVar1 = SYSTEM::ROUND(fVar0);
    if (iLocal_1283 != iVar1)
    {
      iVar2 = (iVar1 - iLocal_1283);
      iLocal_1283 = iVar1;
      return iVar2;
    }
  }
  return 0;
}