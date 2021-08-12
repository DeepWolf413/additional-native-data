// annesburg.ysc @ L5667
int func_162(int iParam0)
{
  int iVar0;
  int iVar1;

  if (Global_1430252 < (MISC::GET_FRAME_COUNT() - 30))
  {
    Global_1430252 = MISC::GET_FRAME_COUNT();
    iVar0 = 0;
    while (iVar0 < 3)
    {
      Global_1430252.f_1[iVar0] = 0;
      iVar0++;
    }
    iVar1 = 0;
    while (iVar1 <= 13)
    {
      if (Global_40.f_9479[iVar1 /*4*/] != -1)
      {
        Global_1430252.f_1[Global_40.f_9479[iVar1 /*4*/]]++;
      }
      iVar1++;
    }
  }
  return Global_1430252.f_1[iParam0];
}