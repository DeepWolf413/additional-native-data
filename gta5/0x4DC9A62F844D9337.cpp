// fm_mission_controller.ysc @ L690298
void func_11489()
{
  if (Local_31280[bLocal_3287 /*292*/].f_1 == 0)
  {
    iLocal_44759 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(PLAYER::GET_PLAYER_PED(bLocal_3283), true)));
    MISC::SET_BIT(&bLocal_44781, 2);
    if (MISC::IS_BIT_SET(bLocal_44781, 3))
    {
    }
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_44759))
    {
      return;
    }
  }
  else if (Local_31280[bLocal_3287 /*292*/].f_1 == 1)
  {
    iLocal_44759 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(PLAYER::GET_PLAYER_PED(bLocal_3283), false)));
    MISC::SET_BIT(&bLocal_44781, 2);
    if (MISC::IS_BIT_SET(bLocal_44781, 3))
    {
    }
    if (!ENTITY::DOES_ENTITY_EXIST(iLocal_44759))
    {
      return;
    }
  }
}