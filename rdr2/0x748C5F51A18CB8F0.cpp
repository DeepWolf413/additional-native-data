// beat_drunk_dueler.ysc @ L8691
void func_239(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  while (iVar0 <= (Global_40.f_1094 - 1))
  {
    if (Global_40.f_450[iVar0] == iParam0)
    {
      func_616(&(Global_1347702[iParam0 /*49*/].f_13), 2);
      VOLUME::_0x748C5F51A18CB8F0(0);
      func_617(iParam0, 1, 1, iParam1, 32);
      VOLUME::_0x748C5F51A18CB8F0(1);
      iVar1 = (Global_40.f_1094 - 1);
      if (iVar0 < iVar1)
      {
        if (func_45(Global_40.f_450[iVar1]))
        {
          Global_40.f_450[iVar0] = Global_40.f_450[iVar1];
          Global_40.f_450[iVar1] = -1;
        }
      }
      else
      {
        Global_40.f_450[iVar0] = -1;
      }
      Global_40.f_1094 = (Global_40.f_1094 - 1);
      return;
    }
    iVar0++;
  }
}