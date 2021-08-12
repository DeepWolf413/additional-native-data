// grays3.ysc @ L78020
void func_2125(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
  *uParam0 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
  *uParam1 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
  *iParam2 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
  *iParam3 = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}