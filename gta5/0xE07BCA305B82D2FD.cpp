// maintransition.ysc @ L114921
void func_940(bool bParam0)
{
  int iVar0;
  
  func_896(0, 1, 1, bParam0);
  iVar0 = 0;
  while (iVar0 <= 2)
  {
    func_40(1, iVar0);
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 <= 2)
  {
    STATS::STAT_SAVE(iVar0, false, 0, 0);
    iVar0++;
  }
  if (func_923())
  {
    func_4340(4);
    func_4332(3);
  }
}