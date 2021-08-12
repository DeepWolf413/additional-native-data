// cv_cc_am_cln_shared.ysc @ L9787
void func_326(var uParam0, var uParam1)
{
  int iVar0;

  if (uParam1->f_43)
  {
    return;
  }
  iVar0 = func_53(uParam0, *uParam1);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED"), true) != 1)
  {
    return;
  }
  TASK::_0xA052608A12559BBB(iVar0, &(uParam1->f_27));
  uParam1->f_43 = 1;
}