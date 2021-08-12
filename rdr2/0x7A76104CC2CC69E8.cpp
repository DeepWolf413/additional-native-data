// av_hobo_train_hop.ysc @ L3049
void func_77(var uParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_20[0 /*14*/], 584530007) && MISC::_0x7A76104CC2CC69E8(uParam0->f_20[0 /*14*/], 1, 1))
    {
      if (!func_122(uParam0->f_20[0 /*14*/], 518218985))
      {
        TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0->f_20[0 /*14*/], Global_35, 3, 256, -1082130432 /* Float: -1f */, -1, 0);
        func_80(&(uParam0->f_20[0 /*14*/]), 0, 1);
        PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
        uParam0->f_469[0] = 1;
      }
    }
  }
}