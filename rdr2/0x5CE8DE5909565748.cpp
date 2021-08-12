// ambient_fishing_scenario.ysc @ L74
void func_5()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
  {
    switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
    {
      case -45008988:
        func_9(iVar0);
        break;
      case -456923784:
        func_10(iVar0);
        break;
      case -843555838:
        func_11(iVar0);
        break;
    }
    iVar0++;
  }
}