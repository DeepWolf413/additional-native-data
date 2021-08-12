// ambush_pnk_type1.ysc @ L19848
int func_695(int iParam0)
{
  if (!func_523(iParam0))
  {
    return 0;
  }
  if (Global_40.f_358[iParam0 /*12*/].f_5 & 2 != 0)
  {
    return 5;
  }
  if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
  {
    return func_722(Global_40.f_358[iParam0 /*12*/]);
  }
  return 0;
}