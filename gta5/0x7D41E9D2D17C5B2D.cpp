// abigail2.ysc @ L39990
void func_387(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
  int iVar0;
  int iVar1;
  
  iVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, fParam3, iParam4, 127);
  if (STREAMING::STREAMVOL_IS_VALID(iVar0))
  {
    iVar1 = (MISC::GET_GAME_TIMER() + iParam5);
    while (!STREAMING::STREAMVOL_HAS_LOADED(iVar0) && MISC::GET_GAME_TIMER() < iVar1)
    {
      if (bParam7)
      {
        func_363(0);
      }
      if (bParam6)
      {
        func_388();
      }
      SYSTEM::WAIT(0);
    }
    if (MISC::GET_GAME_TIMER() < iVar1)
    {
    }
    STREAMING::STREAMVOL_DELETE(iVar0);
  }
}