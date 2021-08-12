// beat_drunk_dueler.ysc @ L2652
void func_54(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (func_53(Global_1347702[iParam0 /*49*/].f_12, 4))
  {
    iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
    iVar1 = joaat("HUD_TOASTS");
  }
  else
  {
    iVar2 = func_250(iParam0, 1);
    iVar0 = iVar2;
    iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
  }
  if (func_53(Global_1347702[iParam0 /*49*/].f_12, 67108864))
  {
    func_251("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
  }
  else
  {
    UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_252(iParam0));
    func_253("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, joaat("PLAYER_MENU"), "MISSION_COMPLETE_DETAILS", joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
  }
}