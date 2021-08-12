// beat_wealthy_couple.ysc @ L11816
void func_357()
{
  int iVar0;
  bool bVar1;

  bVar1 = func_564(15f);
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_312[0]))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    if (bVar1)
    {
      TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, 2f, 4f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
    }
    else
    {
      TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Nervous", -1f, 5f, 4);
    }
    func_342(uLocal_312[0], &iVar0, 0, 0, 1, 1);
  }
  if (!ENTITY::IS_ENTITY_DEAD(uLocal_312[1]))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    if (bVar1)
    {
      TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, 2f, 4f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
    }
    else
    {
      TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Scared", -1f, 5f, 4);
    }
    func_342(uLocal_312[1], &iVar0, 1.5f, 0, 1, 1);
  }
}