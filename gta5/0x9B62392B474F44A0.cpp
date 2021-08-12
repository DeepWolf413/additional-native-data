// finale_heist2a.ysc @ L112479
void func_723(int iParam0, struct<3> Param1, float fParam4)
{
  int iVar0;
  int iVar1;
  
  if (PED::CAN_CREATE_RANDOM_DRIVER())
  {
    MISC::CLEAR_AREA(Param1, 2f, true, false, false, false);
    iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, true, true, false);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
    iVar1 = PED::CREATE_RANDOM_PED_AS_DRIVER(iVar0, true);
    TASK::TASK_VEHICLE_MISSION(iVar1, iVar0, 0, 1, 15f, 786603, 5f, 5f, true);
    PED::SET_PED_KEEP_TASK(iVar1, true);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 15f);
    ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
  }
}