// fbi5a.ysc @ L135332
void func_1053(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10)
{
  *iParam0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
    {
      if (!VEHICLE::IS_BIG_VEHICLE(*iParam0))
      {
        if (!ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("taxi"))
        {
          if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param1, Param4, false, true, 0))
          {
            if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
            {
              ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
            }
            if (!func_642(*iParam0, func_1109(), 0))
            {
              MISC::CLEAR_AREA(Param7, 10f, true, false, false, false);
              ENTITY::SET_ENTITY_COORDS(*iParam0, Param7, true, false, false, true);
              ENTITY::SET_ENTITY_HEADING(*iParam0, fParam10);
              VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
            }
          }
        }
      }
    }
  }
}