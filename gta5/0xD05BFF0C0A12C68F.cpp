// fm_mission_controller.ysc @ L641461
void func_10566(int iParam0, bool bParam1)
{
  if (!MISC::IS_BIT_SET(bLocal_11997, bParam1))
  {
    if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iParam0) || (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(PED::GET_VEHICLE_PED_IS_IN(iParam0, false))))
    {
      if (iLocal_17263 <= 15)
      {
        ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, true, 1);
        iLocal_17263++;
        MISC::SET_BIT(&bLocal_11997, bParam1);
        func_10567(iParam0, bParam1);
      }
    }
  }
  else
  {
    func_10567(iParam0, bParam1);
  }
}