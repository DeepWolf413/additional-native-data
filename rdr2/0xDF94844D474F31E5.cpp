// cv_cc_am_cln_shared.ysc @ L1325
void func_50(var uParam0, var uParam1)
{
  int iVar0;

  iVar0 = func_53(uParam0, *uParam1);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (func_108(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
  {
    TASK::_0xDF94844D474F31E5(iVar0);
    TASK::CLEAR_PED_TASKS(iVar0, true, false);
  }
}