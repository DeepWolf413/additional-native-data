// apparcadebusinesshub.ysc @ L10430
void func_368()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (Global_1701713.f_4 == -1)
  {
    iVar0 = func_374(func_356(PLAYER::PLAYER_ID()));
    if (func_356(PLAYER::PLAYER_ID()))
    {
      iVar2 = func_372(PLAYER::PLAYER_ID());
      if (iVar2 == -1)
      {
        iVar2 = func_370(PLAYER::PLAYER_ID());
      }
      iVar1 = func_369(iVar2);
    }
    else
    {
      iVar2 = -1;
      iVar1 = -1;
    }
  }
  else
  {
    iVar0 = 1;
    iVar2 = Global_1701713.f_4;
    iVar1 = func_369(Global_1701713.f_4);
    Global_1701713.f_4 = -1;
  }
  STATS::_0x810B5FCC52EC7FF0(iLocal_127, iVar0, iVar1, iVar2);
}