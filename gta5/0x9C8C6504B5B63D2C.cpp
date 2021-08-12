// armenian1.ysc @ L49514
void func_464(int iParam0)
{
  int iVar0;
  
  if ((MISC::GET_GAME_TIMER() - iLocal_2624) > 2000)
  {
    if (iParam0 != Local_3048[iLocal_2615 /*7*/])
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
      {
        if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 9f)
        {
          if ((ENTITY::GET_ENTITY_SPEED(Local_3048[iLocal_2614 /*7*/]) - ENTITY::GET_ENTITY_SPEED(iParam0)) > 3f || MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_3048[iLocal_2614 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
          {
            iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
            if (!PED::IS_PED_INJURED(iVar0))
            {
              VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, false);
              iLocal_2624 = MISC::GET_GAME_TIMER();
            }
          }
        }
      }
    }
  }
}