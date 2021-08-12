// winter1.ysc @ L88757
bool func_2478()
{
  if (!func_177(iLocal_906, 262144))
  {
    if (func_2477())
    {
      if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_11[0]) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_11[0]))
      {
        AUDIO::PLAY_STREAM_FROM_PED(Local_14.f_11[0], AUDIO::_0x0556C784FA056628("cabin_fiddle_music", "wnt1_sounds"));
        func_179(&iLocal_906, 262144);
        return true;
      }
    }
  }
  else
  {
    return true;
  }
  return false;
}