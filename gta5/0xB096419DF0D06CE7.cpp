// main_persistent.ysc @ L332066
void func_5245()
{
  int iVar0;
  
  if ((func_5260(Global_110719) != 4 || func_5259(Global_110719) < 40) || func_5259(Global_110719) > 50)
  {
    iVar0 = Global_110719;
    func_5250(&iVar0, 0, 2, 0, 0, 0, 0);
    CLOCK::SET_CLOCK_TIME(func_5260(iVar0), func_5259(iVar0), func_5249(iVar0));
    CLOCK::SET_CLOCK_DATE(func_5248(iVar0), func_5247(iVar0), func_5246(iVar0));
  }
}