// startup.ysc @ L2436
void func_93(var uParam0, char* sParam1, int iParam2)
{
  char cVar0[64];
  struct<8> Var8;

  StringCopy(&cVar0, "playerHorse", 64);
  Var8 = { cVar0 };
  StringConCat(&Var8, "eCurrentStableSlot", 64);
  SAVE::_0x443174C20B8B9E7F(uParam0, 3142, &cVar0);
  SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
  func_272(&(uParam0->f_1));
  func_273(&(uParam0->f_3054));
  func_274(&(uParam0->f_3134));
  func_275(&(uParam0->f_3135));
  func_276(&(uParam0->f_3140));
  SAVE::_0xE0B45E983BFC0768();
}