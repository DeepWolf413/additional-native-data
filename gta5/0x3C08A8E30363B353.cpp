// re_duel.ysc @ L5015
void func_74(int iParam0, struct<3> Param1)
{
  if (func_225(iParam0))
  {
    ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
    MISC::CLEAR_AREA_OF_PEDS(Param1, 1.5f, 0);
    MISC::CLEAR_AREA_OF_VEHICLES(Param1, 3f, false, false, false, false, false, false);
    ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
    ENTITY::SET_ENTITY_HEADING(iParam0, func_75(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
    if (func_225(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
      {
        TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), PLAYER::PLAYER_PED_ID());
      }
      else
      {
        TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, true);
      }
    }
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
  }
}