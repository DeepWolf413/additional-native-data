// beat_dark_alley_stabber.ysc @ L7155
void func_199(int iParam0)
{
  if (iParam0 == 0)
  {
    iParam0 = Global_35;
  }
  if ((func_53(uLocal_798[0], 0, 1) && func_159(uLocal_798[0], 1, 1) < 10f) && PED::IS_PED_FACING_PED(uLocal_798[0], Global_35, 15f))
  {
    Local_366.f_3 = iParam0;
    Local_391.f_4 = iParam0;
    _NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_798[0], &Local_366);
    _NAMESPACE29::_0x0B9F7A01EC50448D(uLocal_798[0], &Local_391);
  }
}