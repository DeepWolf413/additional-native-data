// av_eagle_catch_fish.ysc @ L2833
void func_67(var uParam0)
{
  int iVar0;

  if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_FORCE_MOTION_STATE(0, -1299979036, false);
    TASK::TASK_FLY_AWAY(0, Global_35);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[0 /*14*/], iVar0);
    PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
    PED::_0x2208438012482A1A(uParam0->f_20[0 /*14*/], false, false);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  }
}