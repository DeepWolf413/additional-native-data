// am_mp_rc_vehicle.ysc @ L111118
int func_1047(int iParam0)
{
  int iVar0;
  var uVar1;
  int iVar4;
  
  if (iParam0 == 0)
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
    }
    else
    {
      iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
    }
    if (INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      INTERIOR::_GET_INTERIOR_INFO(iVar0, &uVar1, &iVar4);
      if (func_1048(iVar4))
      {
        return 1;
      }
    }
  }
  else if (func_1048(iParam0))
  {
    return 1;
  }
  return 0;
}