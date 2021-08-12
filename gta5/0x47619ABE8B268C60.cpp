// director_mode.ysc @ L17537
int func_248(var uParam0)
{
  float fVar0;
  float fVar1;
  
  if (uParam0->f_105)
  {
    fVar0 = TASK::GET_PHONE_GESTURE_ANIM_CURRENT_TIME(uParam0->f_122);
    fVar1 = TASK::GET_PHONE_GESTURE_ANIM_TOTAL_TIME(uParam0->f_122);
  }
  else
  {
    fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_122, func_368(uParam0, 0, 0), &(uParam0->f_124.f_225));
    fVar1 = ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(uParam0->f_122, func_368(uParam0, 0, 0), &(uParam0->f_124.f_225));
  }
  if (func_252(uParam0, 1, uParam0->f_124.f_378, &(uParam0->f_109), uParam0->f_108 > 0) || fVar1 < 0.1f)
  {
    return 1;
  }
  if (func_249(uParam0, 1))
  {
    return 1;
  }
  return 0;
}