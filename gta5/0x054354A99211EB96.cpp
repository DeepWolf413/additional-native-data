// abigail2.ysc @ L38056
void func_327()
{
  int iVar0;
  
  if (NETWORK::NETWORK_IS_SIGNED_IN())
  {
    STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
    if (!Global_59272[0] == iVar0)
    {
      Global_59272[0] = iVar0;
    }
    STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
    if (!Global_59272[1] == iVar0)
    {
      Global_59272[1] = iVar0;
    }
    STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
    if (!Global_59272[2] == iVar0)
    {
      Global_59272[2] = iVar0;
    }
  }
}