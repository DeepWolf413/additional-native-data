// business_battles_sell.ysc @ L326321
void func_5211()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 7)
  {
    if (MISC::IS_BIT_SET(iLocal_5184, iVar0) || ((iLocal_5175[bVar0] != -1 && AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(iLocal_5175[bVar0]) != -1) && !AUDIO::HAS_SOUND_FINISHED(iLocal_5175[bVar0])))
    {
      AUDIO::STOP_SOUND(iLocal_5175[bVar0]);
      AUDIO::RELEASE_SOUND_ID(iLocal_5175[bVar0]);
      MISC::CLEAR_BIT(&iLocal_5184, bVar0);
      iLocal_5175[bVar0] = -1;
    }
    bVar0++;
  }
  if (iLocal_5099[1] != -1)
  {
    if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5099[1]))
    {
      AUDIO::STOP_SOUND(iLocal_5099[1]);
      iLocal_5099[1] = -1;
    }
  }
}