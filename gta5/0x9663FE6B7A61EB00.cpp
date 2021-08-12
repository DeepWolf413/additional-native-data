// dialogue_handler.ysc @ L2588
void func_60()
{
  if (func_49(2, Global_19775, 0))
  {
    if (Global_22136 == 0)
    {
      if (Global_21131)
      {
        if (MISC::IS_BIT_SET(Global_7669, 17))
        {
        }
        else
        {
          AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
        }
      }
    }
  }
}