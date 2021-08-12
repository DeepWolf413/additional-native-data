// re_chasethieves.ysc @ L35148
void func_310(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
    {
      AUDIO::START_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
      if (func_1(iLocal_92))
      {
        AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_92, "RE_CHASE_THIEVES_BIKE", 0f);
        AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_92, 2);
      }
    }
  }
  else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
  {
    if (func_1(iLocal_92))
    {
      AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_92, 0);
      AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_92, 0f);
    }
    AUDIO::STOP_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
  }
}