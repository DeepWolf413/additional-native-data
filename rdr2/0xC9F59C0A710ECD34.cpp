// rcm_calderon1.ysc @ L26061
bool func_803()
{
  int iVar0;
  int iVar1;
  int iVar11;

  if (SCRIPTS::GET_EVENT_EXISTS(0, joaat("EVENT_PLAYER_PROMPT_TRIGGERED")))
  {
    iVar11 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
    iVar0 = 0;
    while (iVar0 < iVar11)
    {
      if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0) == joaat("EVENT_PLAYER_PROMPT_TRIGGERED"))
      {
        if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &iVar1, 10))
        {
          if (iVar1 == 7)
          {
            return true;
          }
        }
      }
      iVar0++;
    }
  }
  return false;
}