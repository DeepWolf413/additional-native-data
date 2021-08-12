// act_cinema.ysc @ L119134
void func_1211(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<3> Var4;
  
  iVar0 = 0;
  while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
  {
    iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
    if (iVar1 == 174)
    {
      SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
      switch (iVar2)
      {
        case -771178269:
          func_1212(iVar0);
          break;
        
        case -1320260596:
          SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
          if (Var4.f_2 == -2138305833)
          {
            *uParam0 = 1;
          }
          break;
        }
    }
    iVar0++;
  }
}