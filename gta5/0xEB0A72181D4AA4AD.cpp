// maintransition.ysc @ L1982
void func_37(var uParam0)
{
  int iVar0;
  
  func_40(0, 0);
  STATS::STAT_CLEAR_SLOT_FOR_RELOAD(0);
  STATS::_0x6F361B8889A792A3();
  Global_2464926 = 1;
  iVar0 = 1;
  while (iVar0 <= 2)
  {
    func_40(0, iVar0);
    STATS::STAT_CLEAR_SLOT_FOR_RELOAD(iVar0);
    iVar0++;
  }
  func_39(0);
  func_38(&(uParam0->f_1845));
  func_4340(10);
  func_4332(32);
}