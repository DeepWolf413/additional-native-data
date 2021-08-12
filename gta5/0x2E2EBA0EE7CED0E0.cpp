// agency_heist1.ysc @ L728
void func_7()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_1007))
  {
    if (PED::IS_PED_INJURED(iLocal_1007) && iLocal_48 < 6)
    {
      func_13("S1_FAILED_K");
    }
    else
    {
      if (((FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_1007, false) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_1007, false) - Vector(3f, 3f, 3f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_1007, false), 6f, true)) || (PED::IS_PED_FLEEING(iLocal_1007) && !bLocal_51)) || (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_1007)))
      {
        func_13("S1_JSPOOK");
      }
      if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) && iLocal_1011 == PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))
      {
        func_13("S1_JSPOOK");
      }
    }
    if (!bLocal_893)
    {
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_1011))
      {
        if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, false))
        {
          func_13("S1_FAILED_C");
        }
      }
    }
  }
}