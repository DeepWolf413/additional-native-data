// fm_bj_race_controler.ysc @ L319150
void func_4403(var uParam0, var uParam1, var uParam2)
{
  bool bVar0;
  int iVar1;
  
  if (!func_252(uParam0))
  {
    return;
  }
  bVar0 = PLAYER::PLAYER_ID();
  if (!MISC::IS_BIT_SET((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_7, 2))
  {
    if (!func_142(PLAYER::PLAYER_ID(), 0))
    {
      iVar1 = Global_1590908[bVar0 /*874*/].f_96.f_28;
      if (iVar1 != -1)
      {
        func_4405(iVar1);
        PED::SET_PED_CAN_BE_TARGETTED_BY_TEAM(PLAYER::PLAYER_PED_ID(), iVar1, false);
        func_4404(iVar1);
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uParam2->f_813[iVar1]);
        MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_7), 2);
      }
    }
  }
}