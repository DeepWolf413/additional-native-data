// director_mode.ysc @ L15699
void func_192()
{
  if (!TASK::IS_PED_STILL(PLAYER::PLAYER_PED_ID()))
  {
    Global_4254512.f_936 = MISC::GET_GAME_TIMER();
  }
  if (!func_411(PLAYER::PLAYER_PED_ID()))
  {
    Global_4254512.f_937 = MISC::GET_GAME_TIMER();
  }
  func_198(&Global_4194381, &Global_4254512, PLAYER::PLAYER_PED_ID(), 0);
  if (((Global_4254512.f_917 || Global_4254512.f_924) || Global_4254512.f_977) && Global_4254512.f_910)
  {
    func_193(PLAYER::PLAYER_PED_ID(), 0);
  }
  if (Global_4254512.f_910)
  {
    if ((!Global_4254512.f_8 && !Global_4254512.f_25.f_8) && !Global_4254512.f_50.f_8)
    {
      Global_4254512.f_910 = 0;
      Global_4254512.f_913 = -1;
      Global_4254512.f_914 = -1;
    }
  }
}