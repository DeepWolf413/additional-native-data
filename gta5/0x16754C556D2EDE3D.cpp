// abigail1.ysc @ L39206
void func_293()
{
  AUDIO::RESTART_SCRIPTED_CONVERSATION();
  Global_22136 = 0;
  if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19798.f_1 == 9) || Global_19797 == 1)
  {
    AUDIO::STOP_SCRIPTED_CONVERSATION(false);
    Global_21125 = 6;
    Global_19798.f_1 = 3;
    return;
  }
  if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
  {
    AUDIO::STOP_SCRIPTED_CONVERSATION(true);
    Global_21125 = 6;
    return;
  }
}