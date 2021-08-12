// rcm_pearson1.ysc @ L44545
bool func_1353()
{
  int iVar0;
  int iVar1;

  return false;
  if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "prsn_ilo_alt"))
  {
    return false;
  }
  iVar0 = MISC::_0x2E036F0480B8BF02();
  iVar1 = PED::_GET_PED_BLACKBOARD_INT(Global_35, "prsn_ilo_time");
  if (MISC::ABSI((iVar1 - iVar0)) > 3600)
  {
    PED::_0xA6F67BEC53379A32(Global_35, "prsn_ilo_alt");
    PED::_0x81B75428A7813E67(Global_35, "prsn_ilo_time");
    return false;
  }
  return true;
}