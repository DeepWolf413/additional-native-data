// beat_boat_attack.ysc @ L2923
void func_71()
{
  iLocal_729 = 1;
  func_192();
  func_193(65f);
  func_225();
  if (iLocal_14 == 1 && iLocal_733 == 0)
  {
    iLocal_733 = 1;
    iLocal_709 = 0;
    iLocal_710 = 2;
  }
  if (func_194(&Local_15, 1f, 150f, 60f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
  {
    TASK::TASK_BOAT_MISSION(uLocal_395[1], iLocal_407, 0, 0, vLocal_489, 4, 2f, 48, 4f, 20509);
    func_188(&(Local_650[0 /*17*/]), 0);
    func_185(&(Local_650[1 /*17*/]), 1, 0);
    func_193(160f);
    func_190(1);
  }
}