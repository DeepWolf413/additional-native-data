// golf.ysc @ L119339
void func_1174(var uParam0, var uParam1)
{
  float fVar0;
  char* sVar1;
  bool bVar2;
  char cVar3[32];
  char cVar11[32];
  
  sVar1 = func_1002(uParam0, uParam1, &fVar0, 0, 0, 0, 0);
  bVar2 = !func_461(sVar1);
  StringCopy(&cVar3, func_840(uParam1, uParam0, 0, 1), 32);
  StringConCat(&cVar3, "idle", 32);
  cVar11 = { cVar3 };
  StringConCat(&cVar11, sVar1, 32);
  StringConCat(&cVar11, "_a", 32);
  StringConCat(&cVar3, "_a", 32);
  if (bVar2)
  {
  }
  func_995(func_1351(uParam0), &cVar3, &cVar11, bVar2, fVar0, 1f, 10, 0f, 0f, 0f, 0);
  if (!func_535(uParam0, 32768))
  {
    PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_1351(uParam0), true, false);
    PED::_0xED3C76ADFA6D07C4(func_1351(uParam0));
    func_1152(uParam0, 32768);
  }
}