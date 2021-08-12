// am_mp_yacht.ysc @ L119620
void func_956(bool bParam0)
{
  bool bVar0;
  char* sVar1;
  char* sVar2;
  
  bVar0 = func_244();
  if (func_94(PLAYER::PLAYER_ID()) == func_48(PLAYER::PLAYER_ID(), 0))
  {
    sVar1 = "CAPTAIN_HI";
    sVar2 = func_957(3);
  }
  else if (bVar0)
  {
    sVar1 = "GENERIC_HI_FEMALE";
    sVar2 = func_957(3);
  }
  else
  {
    sVar1 = "GENERIC_HI_MALE";
    sVar2 = func_957(3);
  }
  if (bParam0)
  {
    AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_1774);
  }
  AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_1774, sVar1, sVar2, 0);
}