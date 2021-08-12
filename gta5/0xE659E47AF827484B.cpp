// am_hunt_the_beast.ysc @ L113785
int func_826()
{
  if (ENTITY::IS_ENTITY_ON_SCREEN(Local_3371[func_41() /*3*/].f_2))
  {
    if (func_829(Local_3371[func_41() /*3*/].f_2))
    {
      if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_3371[func_41() /*3*/].f_2, true), 1f))
      {
        if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3371[func_41() /*3*/].f_2, 126))
        {
          if (func_827(Local_3371[func_41() /*3*/].f_2, PLAYER::PLAYER_PED_ID(), func_828(), 1))
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}