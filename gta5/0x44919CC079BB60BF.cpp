// am_pi_menu.ysc @ L379683
void func_5470()
{
  var uVar0;
  
  func_1152(func_5406());
  func_1148(0, "PI_BIK_0_0", 0, func_5472(&uVar0), 0, 0, 0);
  func_1148(1, "PI_BIK_0_1", 0, 1, 0, 0, 0);
  if (Global_2526974[Global_2520128 /*66*/][1] == 0)
  {
    func_1148(1, "PIM_DHIGH0", 0, !func_60(), 0, 0, 0);
    func_5455(18);
    STATS::_0x44919CC079BB60BF(0);
  }
  else
  {
    func_1148(1, "PIM_DHIGH1", 0, !func_60(), 0, 0, 0);
    func_668(18);
    func_5471(134);
    STATS::_0x44919CC079BB60BF(1);
  }
}