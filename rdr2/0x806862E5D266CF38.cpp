// rcm_abigail11.ysc @ L16246
struct<2> func_520(int iParam0)
{
  struct<2> Var0;
  char* sVar2;
  int iVar3;

  Var0 = { func_519(iParam0) };
  sVar2 = func_1040(&Var0);
  iVar3 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar2);
  sVar2 = HUD::_0x806862E5D266CF38(sVar2, 1, iVar3);
  StringCopy(&Var0, sVar2, 16);
  StringConCat(&Var0, "AUD", 16);
  return Var0;
}