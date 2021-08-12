// sisikapenitentiary.ysc @ L1092
void func_54()
{
  if (bLocal_25)
  {
    if (LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
    {
      PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
    }
  }
  else if (LAW::_0x0DBACA9C38C9A686(sLocal_23))
  {
    bLocal_25 = true;
    LAW::_0x75CBF20BA47E4F89(Global_36, joaat("LAW_LOCAL_SISIKA"));
  }
}