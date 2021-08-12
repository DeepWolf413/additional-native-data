// finale_heist_prepd.ysc @ L104816
void func_672()
{
  STREAMING::REQUEST_COLLISION_AT_COORD(1770.446f, 3240.695f, 41.1108f);
  iLocal_50 = VEHICLE::CREATE_VEHICLE(joaat("skylift"), 1770.446f, 3240.695f, 41.1108f, 281.6867f, true, true, false);
  VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_50, true, true, false);
  VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_50);
  VEHICLE::SET_PLAYBACK_SPEED(iLocal_50, 0.6f);
  VEHICLE::SET_VEHICLE_STRONG(iLocal_50, true);
  ENTITY::SET_ENTITY_HEALTH(iLocal_50, 3000, 0);
  VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_50, false);
  ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_50, true);
  ENTITY::SET_ENTITY_LOD_DIST(iLocal_50, 3000);
  VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_50, 100f);
  ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_50, true, 1);
  func_676(iLocal_50);
  func_118(0);
  func_114(0);
  func_117(0);
  func_675(iLocal_50, 0);
  func_674(iLocal_50, -1);
  func_673(iLocal_50, -1);
}