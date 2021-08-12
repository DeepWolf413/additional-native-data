// act_cinema.ysc @ L91311
void func_608(int iParam0, int iParam1)
{
  int iVar0;
  
  func_398(iParam0, &iVar0);
  if (iVar0 >= 0)
  {
    func_394(iVar0, -1, -1);
  }
  func_609(&(Global_1323703[iParam0 /*142*/]));
  Global_2097152[func_8() /*5557*/].f_675.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
  func_372(iParam0, &(Global_1323703[iParam0 /*142*/]), 0, iParam1, 0, 0);
}