// cornwall1.ysc @ L17662
void func_167()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 14)
  {
    if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(func_454(8, iVar0), 0))
    {
      TASK::REMOVE_COVER_POINT(iLocal_311[iVar0]);
    }
    iVar0++;
  }
}