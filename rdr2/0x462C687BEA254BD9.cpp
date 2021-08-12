// startup.ysc @ L11718
bool func_444(var uParam0)
{
  var uVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar0 = func_441(uParam0->f_18, uParam0->f_17);
  iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
  iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
  iVar2 = 0;
  while (iVar2 < func_492())
  {
    iVar3 = func_493(iVar2);
    if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar3))
    {
    }
    else if (iVar4 == iVar3)
    {
    }
    else
    {
      iVar1++;
    }
    iVar2++;
  }
  if (!SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar4))
  {
    iVar1++;
  }
  return iVar1 > uParam0->f_33;
}