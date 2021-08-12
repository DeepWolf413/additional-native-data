// fm_bj_race_controler.ysc @ L545150
void func_9276()
{
  bool bVar0;
  int iVar1;
  int iVar2;
  
  func_9604();
  bVar0 = PLAYER::PLAYER_ID();
  iVar1 = PLAYER::PLAYER_PED_ID();
  PLAYER::CLEAR_PLAYER_WANTED_LEVEL(bVar0);
  PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(bVar0);
  PLAYER::SET_POLICE_IGNORE_PLAYER(bVar0, false);
  PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(bVar0, true);
  if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
  {
    iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
    VEHICLE::SET_VEHICLE_IS_WANTED(iVar2, false);
    VEHICLE::_0x4AD280EB48B2D8E6(iVar2, true);
  }
  func_8965(1, 0, 0);
}