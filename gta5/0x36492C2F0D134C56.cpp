// fm_mission_controller.ysc @ L669715
void func_11072(var uParam0)
{
  float fVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_3286) && !ENTITY::IS_ENTITY_DEAD(iLocal_3286, false))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3286, false) && ENTITY::GET_ENTITY_SPEED(iLocal_3286) > 0f)
    {
      fVar0 = VEHICLE::_GET_VEHICLE_CURRENT_SLIPSTREAM_DRAFT(PED::GET_VEHICLE_PED_IS_IN(iLocal_3286, false));
      *uParam0 = (*uParam0 + SYSTEM::ROUND(fVar0));
    }
  }
}