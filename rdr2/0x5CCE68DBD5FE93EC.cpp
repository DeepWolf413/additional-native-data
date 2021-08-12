// law_guama.ysc @ L1051
bool func_43(var uParam0)
{
  int iVar0;

  iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
  if (!ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 4, 0);
  }
  return true;
}