// am_casino_peds.ysc @ L352370
int func_4970(var uParam0, bool bParam1, var uParam2)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (bParam1 == PLAYER::PLAYER_ID())
    {
      if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) && Global_1694749 == 1)
      {
        if ((ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 2f || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_JUST_PRESSED(0, 72))
        {
          PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
          VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
          VEHICLE::_0xDBC631F109350B8C(iVar0, true);
          PAD::DISABLE_CONTROL_ACTION(0, 75, true);
          if (func_1395(PLAYER::PLAYER_PED_ID(), 0) == -1)
          {
            func_4969(iVar0);
          }
          return 1;
        }
      }
    }
    else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(bParam1) && uParam2)
    {
      return 1;
    }
  }
  return 0;
}