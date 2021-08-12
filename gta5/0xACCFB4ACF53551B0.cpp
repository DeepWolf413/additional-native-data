// agency_heist3b.ysc @ L122621
int func_881(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
  if (func_41(Param1) || fParam4 <= 0f)
  {
    return 0;
  }
  if (uParam0->f_893)
  {
    if (func_98(uParam0->f_893.f_4, Param1, 0) && uParam0->f_893.f_10 == fParam4)
    {
      uParam0->f_893.f_2 = 0;
      if (!uParam0->f_893.f_1)
      {
        uParam0->f_1007 = 1;
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param1, fParam4, iParam5);
  uParam0->f_893 = 1;
  uParam0->f_893.f_3 = MISC::GET_GAME_TIMER();
  uParam0->f_893.f_4 = { Param1 };
  uParam0->f_893.f_7 = { 0f, 0f, 0f };
  uParam0->f_893.f_10 = fParam4;
  uParam0->f_1007 = 1;
  return 1;
}