// mudtown3b.ysc @ L25770
void func_438(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_2282))
  {
    if (bParam0)
    {
      AUDIO::_0x0FAF7171BF613B80(iLocal_2282);
    }
    else
    {
      AUDIO::_0x0FAF7171BF613B80(0);
    }
    AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", bParam0);
  }
}