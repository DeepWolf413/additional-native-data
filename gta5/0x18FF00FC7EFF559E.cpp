// am_mp_smpl_interior_int.ysc @ L303406
void func_5009()
{
  int iVar0;
  int iVar1;
  
  if (func_4259(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (func_4259(iVar0))
      {
        if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
        {
          if (func_4259(iVar1))
          {
            ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
            ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar1, 0, 1f, 0f, 1f, false, true, false, false);
          }
        }
      }
    }
  }
}