// benchmark.ysc @ L897
int func_31()
{
  int iVar0;
  
  if (iLocal_218 == 1)
  {
    return 1;
  }
  if (func_33())
  {
    MISC::CLEAR_AREA(Local_205[0 /*3*/], 10f, true, false, false, false);
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 2)
    {
      iLocal_193[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_196[iVar0], Local_205[iVar0 /*3*/], fLocal_212[iVar0], true, true, false);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_193[iVar0], 5f);
      iLocal_199[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_193[iVar0], 26, iLocal_202[iVar0], -1, true, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_199[iVar0], true);
      iVar0++;
    }
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_193[0], true, 1);
    iLocal_215 = VEHICLE::CREATE_VEHICLE(iLocal_216, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_193[0], 0f, -50f, 10f), fLocal_212[0], true, true, false);
    VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_193[0], iLocal_215, 1f);
    VEHICLE::SET_TRAILER_LEGS_RAISED(iLocal_215);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_215, true);
    iLocal_218 = 1;
    func_32();
    return 1;
  }
  return 0;
}