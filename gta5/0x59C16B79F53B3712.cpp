// am_rollercoaster.ysc @ L5778
int func_144(int iParam0)
{
  if (MISC::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
  {
    if (!AUDIO::LOAD_STREAM_WITH_START_OFFSET("Player_Ride", 0, "DLC_IND_ROLLERCOASTER_SOUNDS"))
    {
      return 0;
    }
  }
  else if (!AUDIO::LOAD_STREAM_WITH_START_OFFSET("Ambient_Ride", iParam0, "DLC_IND_ROLLERCOASTER_SOUNDS"))
  {
    return 0;
  }
  return 1;
}