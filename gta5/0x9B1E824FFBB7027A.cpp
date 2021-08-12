// am_mp_smpl_interior_ext.ysc @ L298641
void func_4960(var uParam0)
{
  int iVar0;
  int iVar1;
  
  if (uParam0->f_2 >= 1 && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        func_4961(&iVar0);
        if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
        {
          func_4961(&iVar1);
        }
      }
    }
    if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
    {
      ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
      ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
      NETWORK::SET_ENTITY_LOCALLY_VISIBLE(PLAYER::PLAYER_PED_ID());
    }
  }
}