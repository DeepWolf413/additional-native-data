// marston7.ysc @ L50513
bool func_1211(vector3 vParam0)
{
  if (func_426(iLocal_110, 0) && func_426(Global_35, 0))
  {
    if (!PED::DOES_GROUP_EXIST(iLocal_238))
    {
      iLocal_238 = PED::CREATE_GROUP(0);
      PED::SET_GROUP_FORMATION(iLocal_238, 4);
      PED::_0x97C475212B327666(iLocal_238, 1);
      PED::SET_PED_CONFIG_FLAG(iLocal_110, 279, true);
      PED::SET_PED_AS_GROUP_LEADER(iLocal_110, iLocal_238, false);
      PED::_0x0E9E95FDEDCC9D35(iLocal_110, 0, 0);
      PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iLocal_110, 0f, 0f, 2, 2, 0);
      PLAYER::_0x086549F3B0381CB1(PLAYER::GET_PLAYER_INDEX(), 1);
      return false;
    }
    else if (!func_1762(iLocal_110, 1199744105))
    {
      TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_110, iLocal_118, vParam0, 12.5f, 69730435, 1, 5f, 2.5f, 1);
      return false;
    }
    return true;
  }
  return false;
}