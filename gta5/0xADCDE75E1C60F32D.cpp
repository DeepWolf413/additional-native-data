// am_heist_int.ysc @ L3811
void func_95()
{
  if (!MISC::IS_BIT_SET(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
  {
    if (!func_7(&uLocal_264))
    {
      func_6(&uLocal_264, 0, 0);
    }
    else if (func_5(&uLocal_264, 5000, 0))
    {
      if (MISC::IS_POSITION_OCCUPIED(718.3742f, -977.444f, 23.1256f, 3f, false, true, false, false, false, 0, false))
      {
        MISC::SET_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
      }
      func_4(&uLocal_264);
    }
  }
  else if (!MISC::IS_POSITION_OCCUPIED(718.3742f, -977.444f, 23.1256f, 3f, false, true, false, false, false, 0, false))
  {
    MISC::CLEAR_BIT(&(Local_160[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
  }
}