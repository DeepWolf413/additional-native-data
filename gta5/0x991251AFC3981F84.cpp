// abigail2.ysc @ L46363
void func_459(bool bParam0, int iParam1, int iParam2)
{
  bool bVar0;
  
  bVar0 = true;
  if (CUTSCENE::IS_CUTSCENE_ACTIVE())
  {
    while (bVar0)
    {
      bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
      if (CUTSCENE::IS_CUTSCENE_PLAYING())
      {
        CUTSCENE::STOP_CUTSCENE(false);
      }
      if (CUTSCENE::HAS_CUTSCENE_LOADED())
      {
        CUTSCENE::REMOVE_CUTSCENE();
      }
      if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
      {
        bVar0 = false;
      }
      SYSTEM::WAIT(0);
    }
    if (bParam0)
    {
      func_330(iParam1, iParam2, 1, 1);
    }
  }
}