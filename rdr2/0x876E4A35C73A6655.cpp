// coachrobberies.ysc @ L42628
void func_1264(int iParam0, char* sParam1, int iParam2, int iParam3)
{
  int iVar0;

  Global_1945938[iParam0 /*18*/].f_4 = iParam2;
  Global_1945938[iParam0 /*18*/] = 3;
  Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
  Global_1945938[iParam0 /*18*/].f_2 = 0;
  Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
  Global_1945938[iParam0 /*18*/].f_9 = 0f;
  Global_1945938[iParam0 /*18*/].f_10 = 0;
  Global_1945938[iParam0 /*18*/].f_11 = 0;
  Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
  Global_1945938[iParam0 /*18*/].f_5 = 4;
  Global_1945938[iParam0 /*18*/].f_1 = 2;
  Global_1945938[iParam0 /*18*/].f_17 = -1;
  iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
  HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam2);
  HUD::_UIPROMPT_SET_TEXT(iVar0, sParam1);
  HUD::_UIPROMPT_SET_PRIORITY(iVar0, 3);
  HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, 0);
  HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
  HUD::_UIPROMPT_SET_HOLD_MODE(iVar0, iParam3);
  HUD::_UIPROMPT_REGISTER_END(iVar0);
  Global_1945938[iParam0 /*18*/].f_3 = iVar0;
  func_463(iParam0, 1);
  func_464(iParam0, 1);
  func_465(iParam0, 128);
}