// abigail2_1.ysc @ L16730
void func_130(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
  int iVar0;

  iVar0 = 3490746;
  if (bParam4)
  {
    iVar0 |= 1;
  }
  if (bParam5)
  {
    iVar0 |= 72;
  }
  if (bParam6)
  {
    iVar0 |= 6;
  }
  if (bParam7)
  {
    iVar0 |= 524288;
  }
  if (bParam8)
  {
    iVar0 |= 131072;
  }
  MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}