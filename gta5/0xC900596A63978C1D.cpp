// abigail1.ysc @ L30113
void func_161(int iParam0, bool bParam1, bool bParam2)
{
  struct<4> Var0;
  char* sVar32;
  
  if (iParam0 != -1)
  {
    func_163(iParam0, &Var0);
    MemCopy(&sVar32, {func_158(iParam0)}, 4);
    STATS::PLAYSTATS_MISSION_CHECKPOINT(&sVar32, 0, Global_99407, 0);
    func_162(&sVar32, Var0.f_3, Global_99407, bParam1, bParam2);
  }
}