// utopia2.ysc @ L55767
void func_1283()
{
  int iVar0;
  vector3 vVar1;

  iVar0 = 0;
  while (iVar0 <= 3)
  {
    vVar1 = { func_796(16, iVar0) };
    MISC::_ADD_TACTICAL_ANALYSIS_POINT(vVar1, 0);
    iVar0++;
  }
}