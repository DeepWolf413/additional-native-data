// av_crows_and_eagles_eat_deer.ysc @ L3005
void func_73(var uParam0, int iParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iParam1 /*14*/]))
  {
    if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_3.f_1, uParam0->f_20[iParam1 /*14*/].f_1))
    {
      ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_20[iParam1 /*14*/].f_1, uParam0->f_20[iParam1 /*14*/]);
      PED::FORCE_PED_MOTION_STATE(uParam0->f_20[iParam1 /*14*/], -1299979036, false, 0, false);
      TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_20[iParam1 /*14*/], uParam0->f_20[iParam1 /*14*/].f_5, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
      TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_20[iParam1 /*14*/], 1f);
      func_57(&(uParam0->f_20[iParam1 /*14*/]), 1, 1);
      PED::SET_PED_KEEP_TASK(uParam0->f_20[iParam1 /*14*/], true);
    }
  }
}