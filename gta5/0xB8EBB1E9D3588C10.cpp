// director_mode.ysc @ L17494
int func_245(var uParam0)
{
  if (uParam0->f_124.f_376)
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_122, false))
    {
      if (uParam0->f_105)
      {
        if (uParam0->f_103 == 2)
        {
          if (func_246(uParam0->f_122) && TASK::IS_PLAYING_PHONE_GESTURE_ANIM(uParam0->f_122))
          {
            return 1;
          }
        }
      }
      else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_122, func_368(uParam0, 0, 0), &(uParam0->f_124.f_241), 3))
      {
        return 1;
      }
    }
  }
  return 0;
}