// native_son1.ysc @ L34454
int func_743(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 3)
  {
    func_1255(uParam0, iLocal_163[iVar0]);
    func_171(&(iLocal_167[iVar0]), 0);
    iVar0++;
  }
  if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_150[0]))
  {
    VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_150[0]);
  }
  func_184(iLocal_323);
  func_440(&iLocal_209);
  return 1;
}