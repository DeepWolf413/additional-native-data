// mudtown1.ysc @ L18315
void func_182(bool bParam0)
{
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 21)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*4*/].f_1))
    {
      if (!func_402(Local_236[iVar0 /*4*/].f_3, 1))
      {
      }
      else if (!func_170(Local_236[iVar0 /*4*/].f_1, 0))
      {
      }
      else if (bParam0)
      {
        if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_236[iVar0 /*4*/].f_1))
        {
          AUDIO::STOP_PED_SPEAKING(Local_236[iVar0 /*4*/].f_1, true);
        }
      }
      else if (AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_236[iVar0 /*4*/].f_1))
      {
        AUDIO::STOP_PED_SPEAKING(Local_236[iVar0 /*4*/].f_1, false);
      }
    }
    iVar0++;
  }
}