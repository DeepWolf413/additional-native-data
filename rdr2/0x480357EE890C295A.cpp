// act_bankrobbery01.ysc @ L35672
int func_1020(var uParam0, var uParam1, int iParam2)
{
  int iVar0;

  if (!func_1502(1) || !func_993(1))
  {
    return 0;
  }
  iVar0 = 184;
  while (iVar0 <= 207)
  {
    if ((func_538(uParam0, iVar0) && !func_532(uParam0, iVar0)) && func_1501(uParam0, uParam1, iParam2, iVar0))
    {
      return AUDIO::_0x152ED1B56E8F1F50(func_227(iVar0), AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_227(iVar0)));
    }
    iVar0++;
  }
  return 0;
}