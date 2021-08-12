// family2.ysc @ L51397
void func_476()
{
  if (bLocal_269)
  {
    if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
      if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
      {
        if (!func_478(29))
        {
          func_244("AM_H_NOSTAM", -1);
          func_477(29);
        }
      }
    }
  }
}