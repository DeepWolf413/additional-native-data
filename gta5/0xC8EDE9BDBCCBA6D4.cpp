// mission_triggerer_b.ysc @ L118517
int func_1065()
{
  if (!MISC::IS_BIT_SET(iLocal_504, 1))
  {
    AUDIO::_0xC8EDE9BDBCCBA6D4("CHINESE_1_INT_LEADIN", 1986.441f, 3052.163f, 46.2152f);
    MISC::SET_BIT(&iLocal_504, 1);
  }
  if (func_682(&(Global_95867.f_209)) && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CHINESE_1_INT_LEADIN", 0))
  {
    return 1;
  }
  return 0;
}