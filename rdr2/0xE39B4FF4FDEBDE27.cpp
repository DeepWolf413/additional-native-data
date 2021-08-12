// law_guama.ysc @ L1117
int func_46(var uParam0)
{
  int iVar0;

  iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
  if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630.f_12)
  {
    TASK::TASK_GOTO_ENTITY_OFFSET(iVar0, Global_35, -1, 15f, 0f, 1f, 2);
    return 1;
  }
  return 0;
}