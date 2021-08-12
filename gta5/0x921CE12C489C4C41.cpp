// am_armwrestling_apartment.ysc @ L60229
int func_703(int iParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
    {
      if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
      {
        return 1;
      }
      else if (iParam1 && (MISC::GET_GAME_TIMER() % 1000) > 50)
      {
      }
    }
    else if (iParam1 && (MISC::GET_GAME_TIMER() % 1000) > 50)
    {
    }
  }
  else if (iParam1 && (MISC::GET_GAME_TIMER() % 1000) > 50)
  {
  }
  return 0;
}