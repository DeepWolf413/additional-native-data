// fm_mission_controller_2020.ysc @ L311041
bool func_4198(bool bParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(func_4227(bParam0));
  iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_PENDING_STATE(func_4227(bParam0));
  return (iVar0 == 1 || iVar1 == 1);
}