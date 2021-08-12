// startup.ysc @ L4740
void func_152(var uParam0, char* sParam1)
{
  char cVar0[64];

  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, ".x", 64);
  SAVE::_0x35DEFECAE36D4FAE(uParam0, &cVar0);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, ".y", 64);
  SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, ".z", 64);
  SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
}