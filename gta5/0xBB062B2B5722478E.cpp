// am_mp_armory_aircraft.ysc @ L307943
void func_5005(bool bParam0)
{
  if (bParam0)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) == 0)
      {
        TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
      }
    }
  }
  Global_1701009 = bParam0;
}