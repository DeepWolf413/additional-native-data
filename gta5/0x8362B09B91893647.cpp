// fm_capture_creator.ysc @ L164001
int func_1287(var uParam0, int iParam1)
{
  int iVar0;
  
  if (func_1283(&(uParam0->f_6701), &(uParam0->f_6702), &(uParam0->f_6710), 0, 0, func_1289(), 0, 0, 0, 0, func_1289(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0))
  {
    uParam0->f_6710 = 0;
    iVar0 = 15;
    iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
    StringCopy(&(Global_4456448.f_131430[iParam1 /*248*/].f_244), HUD::_GET_TEXT_SUBSTRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 0, func_1288(iVar0, 15)), 16);
    uParam0->f_6710 = 0;
    uParam0->f_6701 = 0;
    return 1;
  }
  if (uParam0->f_6701 == 2)
  {
    uParam0->f_6701 = 0;
    uParam0->f_6710 = 0;
    StringCopy(&(Global_4456448.f_131430[iParam1 /*248*/].f_244), "", 16);
    return 1;
  }
  return 0;
}