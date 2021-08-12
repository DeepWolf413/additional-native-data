// av_walk_with_horse.ysc @ L1818
bool func_28(var uParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
  {
    TASK::TASK_ANIMAL_INTERACTION(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/], joaat("INTERACTION_BRUSH"), 0, 0);
    PED::_0x931B241409216C1F(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/], 0);
    iLocal_9 = 1;
    func_59(&(uParam0->f_20[0 /*14*/]), 0, 1);
    func_59(&(uParam0->f_20[1 /*14*/]), 0, 1);
  }
  return func_60(uParam0->f_20[0 /*14*/], -1057545828);
}