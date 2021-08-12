// beat_prison_wagon.ysc @ L3281
void func_71()
{
  if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
  {
    while (!CAM::IS_SCREEN_FADED_OUT())
    {
      BUILTIN::WAIT(0);
    }
  }
}