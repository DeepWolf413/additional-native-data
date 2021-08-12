// fm_mission_controller.ysc @ L709265
int func_11870(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_3286) && ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if ((((PED::IS_PED_RAGDOLL(iLocal_3286) || PED::IS_PED_DEAD_OR_DYING(iLocal_3286, true)) || PED::IS_PED_INJURED(iLocal_3286)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_3286)) || !bLocal_3292)
    {
      return 1;
    }
    if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_3286))
    {
      if (((PED::IS_PED_SWIMMING(iLocal_3286) || PED::IS_PED_DIVING(iLocal_3286)) || PED::IS_PED_RUNNING_MELEE_TASK(iLocal_3286)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(iLocal_3286))
      {
        return 1;
      }
    }
    else if (PED::IS_PED_ON_VEHICLE(iLocal_3286))
    {
      return 1;
    }
  }
  return 0;
}