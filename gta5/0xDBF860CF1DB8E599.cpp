// am_mp_auto_shop.ysc @ L357837
var func_5537(int iParam0, int iParam1)
{
  char[] cVar0[8];
  int iVar1;
  int iVar2;
  struct<2> Var3;
  
  cVar0 = "";
  iVar1 = DATAFILE::_0xDBF860CF1DB8E599(0);
  func_5540(&iVar2, iVar1, func_5541(iParam0));
  StringCopy(&Var3, "clip", 16);
  StringIntConCat(&Var3, iParam1, 16);
  cVar0 = func_5538(iVar2, &Var3, cVar0);
  return cVar0;
}