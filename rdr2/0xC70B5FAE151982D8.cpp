// beat_torturing_captive.ysc @ L11426
bool func_284()
{
  float fVar0;

  fVar0 = func_19(uLocal_46[2], 1, 0);
  if (PED::IS_PED_PLANTING_BOMB(Global_35))
  {
    if (fVar0 <= 7f)
    {
      return true;
    }
  }
  if (func_480())
  {
    if (fVar0 <= 7f || (func_481(uLocal_46[2], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */) && (func_482() || func_483(uLocal_46[2], 0, 0, 0))))
    {
      return true;
    }
  }
  return false;
}