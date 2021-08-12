// av_female_rider_male_walker.ysc @ L3078
void func_69(var uParam0)
{
  if (((PED::_0x331550B212014B92(uParam0->f_20[0 /*14*/], 0) || PED::_0x9337183FDA2E9035(uParam0->f_20[0 /*14*/], PLAYER::PLAYER_ID())) || PED::_0xA454D234E45BB6E5(uParam0->f_20[0 /*14*/], PLAYER::PLAYER_ID())) || uParam0->f_469[1])
  {
    TASK::TASK_CLEAR_LOOK_AT(uParam0->f_20[0 /*14*/]);
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
  {
    if (((!PED::_0x331550B212014B92(uParam0->f_20[0 /*14*/], 0) || !PED::_0xA454D234E45BB6E5(uParam0->f_20[0 /*14*/], PLAYER::GET_PLAYER_INDEX())) || !PED::IS_PED_IN_COMBAT(uParam0->f_20[0 /*14*/], 0)) || !uParam0->f_469[1])
    {
      if (!func_114(&uLocal_41))
      {
        TASK::TASK_LOOK_AT_ENTITY(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/], MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000), 0, 1, 0);
        func_115(&uLocal_41, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 5f));
      }
      if (func_116(&uLocal_41, 15f))
      {
        TASK::TASK_CLEAR_LOOK_AT(uParam0->f_20[0 /*14*/]);
        func_117(&uLocal_41);
      }
    }
  }
}