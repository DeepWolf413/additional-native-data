// av_roving_herd.ysc @ L3385
void func_80(var uParam0)
{
  if (ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]) || (func_82(uParam0->f_20[1 /*14*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(uParam0->f_20[1 /*14*/]) > 1))
  {
    return;
  }
  if (iLocal_26 < 3 || iLocal_26 > 14)
  {
    iLocal_26 = 3;
  }
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iLocal_26 /*14*/]))
  {
    if (!func_82(uParam0->f_20[iLocal_26 /*14*/], 1435919172))
    {
      TASK::TASK_ANIMAL_UNALERTED(uParam0->f_20[iLocal_26 /*14*/], -1, iLocal_55, 0, 0);
    }
    else if (func_71(uParam0->f_20[iLocal_26 /*14*/], uParam0->f_20[1 /*14*/], 1) < 20.25f)
    {
      TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_20[iLocal_26 /*14*/], 1.25f);
      PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_20[iLocal_26 /*14*/], 1.25f);
    }
    else
    {
      PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_20[iLocal_26 /*14*/], fLocal_9[iLocal_26]);
      TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_20[iLocal_26 /*14*/], fLocal_9[iLocal_26]);
    }
  }
  iLocal_26++;
}