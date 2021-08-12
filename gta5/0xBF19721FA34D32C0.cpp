// fm_mission_controller.ysc @ L804410
void func_13571(int iParam0, bool bParam1, int iParam2, struct<3> Param3, bool bParam6)
{
  if (!bParam6)
  {
    if (func_9652(iParam0, bParam1, -1273030092, 0, 19, iParam2))
    {
      TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam0, iParam2, Param3, 19, 20f, 786468, -1f, -1f, true);
      MISC::SET_BIT(&(uLocal_15684[func_768(bParam1)]), func_767(bParam1));
    }
  }
  else if (func_9652(iParam0, bParam1, 71191126, 0, 0, 0))
  {
    TASK::TASK_PLANE_LAND(iParam0, iParam2, Param3, Param3 + Vector(0f, 0f, 100f));
    MISC::SET_BIT(&(uLocal_15684[func_768(bParam1)]), func_767(bParam1));
  }
}