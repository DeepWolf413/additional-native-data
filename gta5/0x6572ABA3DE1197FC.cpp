// casinoroulette.ysc @ L270531
void func_4696(int* iParam0)
{
  int iVar0;
  
  iVar0 = func_4597();
  iParam0->f_2750.f_3 = (iVar0 - iParam0->f_797);
  iParam0->f_2750.f_4 = iVar0;
  iParam0->f_2750.f_5 = func_4697(&(iParam0->f_2711), 0, 0);
  iParam0->f_2750.f_9 = -1;
  if (Global_262145.f_26329)
  {
    STATS::_PLAYSTATS_CASINO_ROULETTE_LIGHT(&(iParam0->f_2750));
  }
  iParam0->f_2750.f_2 = MISC::GET_HASH_KEY("none");
}