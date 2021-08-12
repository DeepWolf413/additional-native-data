// armenian1.ysc @ L56059
void func_523(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8)
{
  int iVar0;
  
  iVar0 = MISC::GET_GAME_TIMER();
  while ((MISC::GET_GAME_TIMER() - iVar0) < iParam8)
  {
    if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
    {
      STREAMING::NEW_LOAD_SCENE_START(Param0, Param3, fParam6, iParam7);
    }
    else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
    {
      iVar0 = 0;
    }
    SYSTEM::WAIT(0);
  }
  STREAMING::NEW_LOAD_SCENE_STOP();
}