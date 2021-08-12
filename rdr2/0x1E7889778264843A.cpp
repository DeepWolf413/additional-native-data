// beat_rat_infestation.ysc @ L25292
void func_808(int iParam0, bool bParam1, vector3 vParam2)
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_FLUSH_ROUTE();
  TASK::TASK_EXTEND_ROUTE(2794.944f, -1166.643f, 46.91581f);
  TASK::TASK_EXTEND_ROUTE(2793.532f, -1166.149f, 46.9157f);
  TASK::TASK_EXTEND_ROUTE(vParam2);
  if (bParam1)
  {
    TASK::TASK_FOLLOW_POINT_ROUTE(0, 2f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
  }
  else
  {
    TASK::TASK_FOLLOW_POINT_ROUTE(0, 2f, 2, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
  }
  func_128(iParam0, &iVar0, 0, 0, 1, 1);
}