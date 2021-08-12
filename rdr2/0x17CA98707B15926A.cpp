// native2.ysc @ L70028
void func_1741(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_163) && !ENTITY::IS_ENTITY_DEAD(iLocal_163))
  {
    if (PED::_IS_PED_CARRYING(iLocal_163))
    {
      TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(Global_35, iLocal_163, *iParam0);
    }
  }
}