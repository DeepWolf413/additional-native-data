// long_update.ysc @ L5889
void func_188()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (Global_1911859[iVar0 /*3*/].f_2)
    {
      if ((MISC::GET_GAME_TIMER() - Global_1911859[iVar0 /*3*/]) >= Global_1911859[iVar0 /*3*/].f_1)
      {
        Global_1911859[iVar0 /*3*/].f_2 = 0;
        switch (iVar0)
        {
          case 0:
            func_576(581, 1);
            PED::_SET_PED_SCENT(Global_35, 1f);
            break;
        }
      }
    }
    iVar0++;
  }
}