// shop_horse_shop.ysc @ L79328
void func_2480(var uParam0)
{
  int iVar0;
  var uVar1;
  int iVar2;
  int iVar3;

  if (!func_2839(uParam0->f_10))
  {
    return;
  }
  func_2840(uParam0, 16);
  iVar2 = func_123(0);
  if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < 13)
  {
    iVar3 = func_2841(iVar0, 1);
    if (!INVENTORY::_0x6862E4D93F64CF01(iVar2, uParam0, iVar3, &uVar1))
    {
    }
    else
    {
      uParam0->f_28[iVar0] = uVar1;
    }
    iVar0++;
  }
}