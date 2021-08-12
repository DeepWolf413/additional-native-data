// beaverhollow.ysc @ L749
bool func_38(int iParam0)
{
  if (((func_52(Global_35, iLocal_0, 1, 0) && iLocal_2 < MISC::GET_GAME_TIMER()) && func_54(func_53())) && func_55(6, 18))
  {
    AUDIO::PLAY_STREAM_FRONTEND(iLocal_1);
    AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_beaver_hollow_Endless_Summer", true, true);
    bLocal_3 = true;
    iLocal_2 = MISC::GET_GAME_TIMER() + 30000;
  }
  if (bLocal_3)
  {
    if (!AUDIO::IS_STREAM_PLAYING(iLocal_1))
    {
      AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_beaver_hollow_Endless_Summer", false, true);
      bLocal_3 = false;
    }
  }
  return true;
}