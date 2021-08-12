// beat_bandito_breakout.ysc @ L434
int func_15()
{
  MISC::CLEAR_AREA(vLocal_14, 40f, 1064960);
  if (iLocal_838 == 0)
  {
    iLocal_838 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), Local_844.f_51, 60f, 60f, 80f, -1f, -1f, 4, 4);
  }
  if (MISC::IS_POSITION_OCCUPIED(Local_844.f_51, 20f, false, true, false, false, false, 0, false))
  {
    if (!func_11(&uLocal_30))
    {
      func_12(&uLocal_30, 0);
    }
    else if (func_13(&uLocal_30, 10f))
    {
      return 1;
    }
    return 0;
  }
  return 1;
}