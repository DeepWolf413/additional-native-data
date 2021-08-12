// maintransition.ysc @ L104006
void func_735()
{
  int iVar0;
  
  if (func_29(202))
  {
    func_4332(31);
    AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
  }
  if (func_29(201))
  {
    AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
    if (func_734() == 0 || func_734() == 1)
    {
      iVar0 = 1;
    }
    else
    {
      iVar0 = 3;
    }
    PLAYER::SET_PLAYER_TARGETING_MODE(iVar0);
    switch (func_4339())
    {
      case 0:
        func_4332(3);
        func_4340(4);
        break;
      }
  }
}