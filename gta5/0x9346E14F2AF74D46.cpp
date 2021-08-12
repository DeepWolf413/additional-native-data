// fm_bj_race_controler.ysc @ L291253
void func_4044()
{
  int iVar0;
  
  if (func_190() && func_4045())
  {
    if (func_872())
    {
      func_2241(1940862352, func_3325(), &iVar0, 0, 1, 0);
    }
    else
    {
      MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(func_3325(), "PREMIUM_R", false, true);
    }
  }
}