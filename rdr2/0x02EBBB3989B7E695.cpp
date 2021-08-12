// av_starting_to_rain.ysc @ L1780
bool func_28(var uParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
  {
    if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_20[0 /*14*/], 1) && !func_59(uParam0->f_20[0 /*14*/], 993674639))
    {
      PED::_0xEEED8FAFEC331A70(uParam0->f_20[0 /*14*/], ENTITY::GET_ENTITY_COORDS(uParam0->f_20[0 /*14*/], true, false), 3);
      TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0->f_20[0 /*14*/], iLocal_37, 0, false, iLocal_38, -1f, false);
    }
    if (func_60(uParam0, &uLocal_9, 0))
    {
      uParam0->f_499 = 1;
      return false;
    }
    if (TASK::_0x02EBBB3989B7E695(uParam0->f_20[0 /*14*/]) && func_61(uParam0, 1065353216 /* Float: 1f */, 40f, 4, 15f, 15f))
    {
      func_62(uParam0);
      return true;
    }
  }
  else
  {
    uParam0->f_499 = 1;
    return false;
  }
  return false;
}