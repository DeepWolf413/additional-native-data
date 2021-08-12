// fm_mission_controller_2020.ysc @ L398145
int func_6502(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
  if (func_292(&iLocal_30897, uParam0->f_8))
  {
    return func_292(&iLocal_30893, uParam0->f_8);
  }
  func_307(&iLocal_30897, uParam0->f_8);
  if (uParam0->f_1)
  {
    PED::SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(uParam0->f_9, fParam7);
    PED::SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(uParam0->f_9, -fParam6);
  }
  if (PED::_0x06087579E7AA85A9(uParam0->f_9, iParam1, fParam2, fParam3, fParam4, fParam5))
  {
    func_307(&iLocal_30893, uParam0->f_8);
    return 1;
  }
  return 0;
}