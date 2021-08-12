// fishing_core.ysc @ L3278
void func_67()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  while (iVar3 < 15)
  {
    iVar1 = iVar3;
    iVar2 = func_192(iVar1);
    iVar0 = func_241(iVar1, 2);
    if (PERSISTENCE::_0x1F56FB3FDB4EAF65(iVar0))
    {
      PERSISTENCE::_0x291CC21D1FB6790E(iVar0);
      if (func_242(iVar2))
      {
        if (!func_245(func_244(func_243(iVar2))))
        {
          func_246(iVar2, 0);
        }
      }
    }
    iVar3++;
  }
}