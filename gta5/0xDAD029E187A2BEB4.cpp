// am_heli_taxi.ysc @ L19969
void func_488()
{
  int iVar0;
  
  iVar0 = SYSTEM::ROUND(10f);
  if (!func_149(iLocal_1214))
  {
    TASK::OPEN_SEQUENCE_TASK(&iLocal_295);
    TASK::TASK_HELI_MISSION(0, iLocal_1214, 0, 0, Local_160.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1f, 0);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_295);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_294);
    TASK::TASK_HELI_MISSION(0, iLocal_1214, 0, 0, Local_160.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1f, 0);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_294);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_293);
    TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
    }
    else
    {
      TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
    }
    TASK::CLOSE_SEQUENCE_TASK(iLocal_293);
  }
}