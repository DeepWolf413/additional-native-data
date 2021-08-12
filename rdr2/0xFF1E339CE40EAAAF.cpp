// ambush_inb_forest.ysc @ L14685
void func_523()
{
  int iVar0;

  iVar0 = func_669(&Local_15, 0);
  if (Global_1935630.f_40 != iVar0)
  {
    if (func_61(iVar0, 0, 1))
    {
      FLOCK::_0xFF1E339CE40EAAAF(iVar0, 0);
      TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, Global_35, 6, 0, 10f, 5000, 0);
    }
  }
}