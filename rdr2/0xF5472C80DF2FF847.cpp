// abigail2_1.ysc @ L37967
void func_906(char[4] cParam0)
{
  char cVar0[64];

  if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
  {
    if (func_1444(cParam0))
    {
      func_423(cParam0, 6);
      StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
      func_1441(cParam0, cVar0);
      func_159(cParam0, 2);
    }
  }
}