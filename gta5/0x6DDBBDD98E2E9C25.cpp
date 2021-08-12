// agency_heist3b.ysc @ L121744
void func_864(float fParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (func_870(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5)))
    {
      func_865(&(Global_112293.f_18101.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
    }
    iVar0++;
  }
  iVar1 = 0;
  while (iVar1 < 6)
  {
    if (func_870(&(Global_112293.f_18101.f_362[iVar1 /*3*/])))
    {
      func_865(&(Global_112293.f_18101.f_362[iVar1 /*3*/]), (fParam0 * 60f));
    }
    iVar1++;
  }
  AUDIO::SKIP_RADIO_FORWARD();
}