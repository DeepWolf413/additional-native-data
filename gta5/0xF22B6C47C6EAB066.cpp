// agency_heist3a.ysc @ L119170
void func_795(int* iParam0, char* sParam1, bool bParam2)
{
  if (!bParam2)
  {
    if (!MISC::IS_STRING_NULL(sParam1))
    {
      if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
      {
        func_637(sParam1, 7500, 1);
      }
    }
  }
  iParam0->f_10 = MISC::GET_GAME_TIMER();
}