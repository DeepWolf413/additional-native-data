// director_mode.ysc @ L116168
void func_765()
{
  int iVar0;
  
  iLocal_14046 = 0;
  iVar0 = 0;
  while (iVar0 < Local_13882)
  {
    if (AUDIO::_CAN_PED_SPEAK(PLAYER::PLAYER_PED_ID(), &(Local_13882[iVar0 /*8*/]), false) || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_13882[iVar0 /*8*/])))
    {
      if (!func_766(Local_13882[iVar0 /*8*/]))
      {
        iLocal_14027[iLocal_14046] = iVar0;
        iLocal_14046++;
      }
    }
    iVar0++;
  }
  iLocal_13801[3] = 0;
}