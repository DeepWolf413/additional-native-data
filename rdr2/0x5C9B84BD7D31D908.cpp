// coachrobberies.ysc @ L19111
bool func_553(var uParam0)
{
  float fVar0;
  float fVar1;
  int iVar2;

  if (!func_25(&(uParam0->f_649)))
  {
    func_100(&(uParam0->f_649));
  }
  if (func_26(&(uParam0->f_649)) > 3f)
  {
    return true;
  }
  else
  {
    fVar1 = (func_26(&(uParam0->f_649)) / 3f);
    if (uParam0->f_597 < func_195(iLocal_24))
    {
      fVar0 = func_552(func_333(uParam0, iLocal_24), func_195(iLocal_24), fVar1);
    }
    iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, uParam0->f_676);
    if (func_53(iVar2, 0))
    {
      TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar2, fVar0);
      TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1, fVar0);
    }
    uParam0->f_597 = fVar0;
    return false;
  }
  return true;
}