// camhedz_arcade.ysc @ L82455
void func_545(int iParam0)
{
  char cVar0[32];
  
  StringCopy(&cVar0, func_543(iParam0), 32);
  if (AUDIO::CANCEL_MUSIC_EVENT(&cVar0))
  {
  }
}