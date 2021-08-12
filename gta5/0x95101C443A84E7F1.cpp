// casinoroulette.ysc @ L276549
void func_4913(int* iParam0)
{
  int iVar0;
  
  iVar0 = func_4597();
  iParam0->f_2713.f_6 = (iVar0 - iParam0->f_798);
  iParam0->f_2713.f_7 = iVar0;
  iParam0->f_2713.f_17 = func_4697(&(iParam0->f_2709), 0, 0);
  iParam0->f_2713.f_16 = 0;
  if (Global_262145.f_26323 && func_4792(iParam0) > 0)
  {
    STATS::_PLAYSTATS_CASINO_ROULETTE(&(iParam0->f_2713));
  }
  iParam0->f_2713.f_4 = MISC::GET_HASH_KEY("none");
}