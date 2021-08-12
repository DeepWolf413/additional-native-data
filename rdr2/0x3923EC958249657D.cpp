// beat_checkpoint.ysc @ L2068
void func_47()
{
  int iVar0;

  if (func_137(uLocal_810[0], 0, 1))
  {
    TASK::CLEAR_PED_TASKS(uLocal_810[0], true, false);
    TASK::TASK_SMART_FLEE_PED(uLocal_810[0], Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
    if (PED::IS_PED_ON_VEHICLE(uLocal_810[0], false) && !PED::IS_PED_IN_VEHICLE(uLocal_810[0], iLocal_807, false))
    {
      ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_810[0], iLocal_807, true);
    }
    iVar0 = 1;
    while (iVar0 <= 3)
    {
      if (!ENTITY::IS_ENTITY_DEAD(uLocal_810[iVar0]))
      {
        TASK::_0x3923EC958249657D(uLocal_810[0], uLocal_810[iVar0], -1082130432 /* Float: -1f */);
      }
      iVar0++;
    }
  }
}