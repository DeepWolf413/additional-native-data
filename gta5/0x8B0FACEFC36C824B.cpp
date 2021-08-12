// achievement_controller.ysc @ L8133
struct<7> func_53(int iParam0)
{
  int iVar0;
  struct<7> Var1;
  struct<7> Var8;
  
  iVar0 = iParam0;
  if (STATS::STAT_GET_DATE(iVar0, &Var8, 7, -1))
  {
    return Var8;
  }
  return Var1;
}