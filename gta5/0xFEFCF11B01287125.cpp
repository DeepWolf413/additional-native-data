// fm_mission_controller.ysc @ L657388
int func_10874(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 22f)
      {
        if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
        {
          return 1;
        }
      }
      if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 7f, true) || MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -3.5f, 3.5f, 3.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 3.5f, -3.5f, -3.5f)))
      {
        return 1;
      }
    }
  }
  return 0;
}