// agency_heist3a.ysc @ L105771
void func_574(var uParam0)
{
  if (!uParam0->f_77)
  {
    if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
    {
      if (!func_567())
      {
        if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
        {
          AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
        }
        else
        {
          AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0f, 0);
        }
      }
    }
  }
}