// abigail2_1.ysc @ L49555
void func_1257()
{
  if (func_1663(Global_35, func_1707(iLocal_119[0]), (func_1708(iLocal_119[0], 1) + 1f), 1, 1) || func_1663(Global_35, func_1707(iLocal_119[1]), (func_1708(iLocal_119[1], 1) + 1f), 1, 1))
  {
    func_1261();
  }
  if (func_1663(Global_35, func_1707(iLocal_119[0]), func_1708(iLocal_119[0], 1), 1, 1))
  {
    HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_38[3 /*8*/], 10f, 1, 1, 0, 0, 0);
  }
  else if (func_1663(Global_35, func_1707(iLocal_119[1]), func_1708(iLocal_119[1], 1), 1, 1))
  {
    HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_124[24], 10f, 1, 1, 0, "AB21_MG_FNC", 0);
  }
}