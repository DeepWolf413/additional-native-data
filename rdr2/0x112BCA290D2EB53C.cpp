// abigail2_1.ysc @ L70108
int func_1979(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  var uVar6;

  if (iParam1 < 0)
  {
    iParam1 = func_971(0);
  }
  if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
  {
    return -15;
  }
  func_1175(&uVar6, iVar0);
  func_1176(&uVar6, iVar1);
  func_1177(&uVar6, iVar2);
  func_1178(&uVar6, iVar3);
  func_1179(&uVar6, iVar4);
  func_1180(&uVar6, iVar5);
  return uVar6;
}