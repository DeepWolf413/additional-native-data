// act_bankrobbery01.ysc @ L747
void func_11(var uParam0, int iParam1)
{
  if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
  {
    func_65(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
  }
  else
  {
    AUDIO::STOP_PED_SPEAKING(func_66(iParam1), false);
    func_65(iParam1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
  }
}