// mudtown4.ysc @ L19901
void func_210()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 <= (8 - 1))
  {
    if (MISC::_IS_BASE_A_COVER_POINT(iLocal_342[iVar0]))
    {
      TASK::REMOVE_COVER_POINT(iLocal_342[iVar0]);
    }
    iVar0++;
  }
}