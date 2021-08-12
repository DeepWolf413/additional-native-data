// bounty1.ysc @ L25669
void func_446(int iParam0, float fParam1, float fParam2, float fParam3)
{
  if (bLocal_59 != iParam0)
  {
    bLocal_59 = !bLocal_59;
    MISC::SET_WIND_SPEED(fParam1);
    AUDIO::_0x821C32C728B24477(iParam0, func_918(fParam2, 0f, 1f), BUILTIN::FLOOR(fParam3));
  }
}