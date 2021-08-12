// am_hunt_the_beast.ysc @ L106276
struct<16> func_545(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  struct<16> Var2;
  char cVar18[32];
  
  iVar0 = Global_2593984[iParam0 /*3*/][func_72(iParam2)];
  iVar1 = Global_2593984[iParam1 /*3*/][func_72(iParam2)];
  StringCopy(&Var2, STATS::STAT_GET_STRING(iVar0, -1), 64);
  StringCopy(&cVar18, STATS::STAT_GET_STRING(iVar1, -1), 32);
  StringConCat(&Var2, &cVar18, 64);
  return Var2;
}