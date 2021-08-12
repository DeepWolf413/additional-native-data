// mob4.ysc @ L89100
int func_2694(char* sParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (func_2888(&iVar0))
  {
    Global_1945938[iVar0 /*18*/].f_4 = func_2396(iParam1);
    Global_1945938[iVar0 /*18*/] = 3;
    Global_1945938[iVar0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
    Global_1945938[iVar0 /*18*/].f_2 = 0;
    Global_1945938[iVar0 /*18*/].f_5 = 5;
    Global_1945938[iVar0 /*18*/].f_1 = 2;
    Global_1945938[iVar0 /*18*/].f_17 = -1;
    iVar1 = HUD::_UIPROMPT_REGISTER_BEGIN();
    HUD::_UIPROMPT_SET_TEXT(iVar1, sParam0);
    HUD::_0xF4A5C4509BF923B1(iVar1, 0);
    HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar1, joaat("INPUT_LOOK_LR"));
    HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar1, joaat("INPUT_LOOK_UD"));
    HUD::_UIPROMPT_SET_ROTATE_MODE(iVar1, 0f, 0);
    HUD::_UIPROMPT_SET_ATTRIBUTE(iVar1, 10, 1);
    HUD::_UIPROMPT_SET_ATTRIBUTE(iVar1, 11, 1);
    HUD::_UIPROMPT_REGISTER_END(iVar1);
    Global_1945938[iVar0 /*18*/].f_3 = iVar1;
    func_2355(iVar0, 1);
    func_2356(iVar0, 1);
    func_2357(iVar0, 128);
    return iVar0;
  }
  return 0;
}