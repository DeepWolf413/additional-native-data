// am_hi_plane_land_cinematic.ysc @ L8164
void func_142(var uParam0)
{
  char* sVar0;
  
  if (!uParam0->f_16)
  {
    if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
    {
      func_64(uParam0, 4);
      return;
    }
    sVar0 = uParam0->f_1;
    if (uParam0->f_2)
    {
      CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sVar0, uParam0->f_17, 24);
    }
    else
    {
      CUTSCENE::REQUEST_CUTSCENE(sVar0, 8);
    }
    uParam0->f_16 = 1;
  }
}