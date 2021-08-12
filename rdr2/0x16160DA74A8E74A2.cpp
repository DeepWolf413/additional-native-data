// bjack_sp.ysc @ L21040
int func_712(int iParam0, char* sParam1, var uParam2)
{
  struct<7> Var0;
  char cVar7[64];

  Var0 = { func_1041(iParam0) };
  if (*uParam2 < 0)
  {
    *uParam2 = 0;
  }
  StringCopy(&cVar7, sParam1, 64);
  StringIntConCat(&cVar7, *uParam2, 64);
  *uParam2++;
  return NETWORK::TEXTURE_DOWNLOAD_REQUEST(&Var0, func_1042(0), &cVar7, true);
}