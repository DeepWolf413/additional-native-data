// agency_prep2amb.ysc @ L811
void func_18()
{
  if (MISC::IS_BIT_SET(iLocal_105, 2) && MISC::IS_BIT_SET(iLocal_105, 0))
  {
    if (func_85(iLocal_109))
    {
      if (func_19(PLAYER::PLAYER_PED_ID(), iLocal_109, 10f, 1))
      {
        if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_109, true), Local_110) >= 100f)
        {
          func_68(0);
        }
      }
    }
    else if (!func_73(25, 0))
    {
      if (func_85(iLocal_109))
      {
        VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_109, false);
      }
      func_20(&iLocal_109);
      func_68(1);
    }
  }
}