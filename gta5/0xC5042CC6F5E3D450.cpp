// act_cinema.ysc @ L119352
int func_1219()
{
  if (!MISC::IS_BIT_SET(iLocal_225, false))
  {
    if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && iLocal_226 != 3)
    {
      return 1;
    }
    if (Global_77248)
    {
      if (func_26(PLAYER::PLAYER_ID(), 1, 0))
      {
        return 1;
      }
    }
    if (iLocal_226 == 3)
    {
      if (func_1200(PLAYER::PLAYER_ID()))
      {
        if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_144.f_1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 30f)
        {
          func_1218(5);
        }
      }
    }
    if (func_1234(14))
    {
      return 1;
    }
  }
  return 0;
}