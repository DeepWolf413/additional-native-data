// mob2.ysc @ L84957
bool func_2288(vector3 vParam0, char* sParam3, bool bParam4)
{
  float fVar0;

  fVar0 = func_903(Global_35, vParam0, 1);
  if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam3))
  {
    if (bParam4)
    {
      if (AUDIO::START_AUDIO_SCENE(sParam3))
      {
        fLocal_818 = fVar0;
        return true;
      }
    }
  }
  else
  {
    if (fVar0 < fLocal_818)
    {
      fLocal_818 = fVar0;
    }
    AUDIO::SET_AUDIO_SCENE_VARIABLE(sParam3, "distanceToNoiseSource", fLocal_818);
  }
  return false;
}