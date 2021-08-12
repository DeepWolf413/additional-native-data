// assassin_valet.ysc @ L19736
void func_409()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1312))
  {
    iLocal_1312 = VEHICLE::CREATE_VEHICLE(iLocal_1326, Local_1287, fLocal_1219, true, true, false);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1326);
    VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_1312, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1312, true, 1);
    VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_1312, true);
  }
}