// assassin_bus.ysc @ L26698
void func_532(var uParam0)
{
  struct<3> Var0;
  
  PHYSICS::ROPE_UNLOAD_TEXTURES();
  func_538(0);
  AUDIO::STOP_SCRIPTED_CONVERSATION(false);
  func_98(0);
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
  }
  iLocal_1028 = iLocal_1028;
  VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_1028);
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
  VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-690.763f, -1607.467f, -100.9649f, -404.4197f, -1856.529f, 100.5908f, true, true);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-706.106f, -1708.865f, -100f, -512.576f, -1842.173f, 100f, 100f, 1);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-480.9742f, -1801.922f, 19.28045f, -712.8968f, -1671.164f, 29.93867f, 170f, 1);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-674.8915f, -1683.639f, 9.116446f, -446.189f, -1807.7f, 31.72464f, 200f, 1);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-662.6993f, -1645.326f, 24.07147f, -672.2144f, -1777.59f, 38.81248f, 45f, 1);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-382.9608f, -1688.732f, 17.8985f, -431.2512f, -1811.23f, 37.6825f, 80f, 1);
  Var0 = { 414.1398f, -640.002f, 27.5001f };
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((Var0.x - 40f), (Var0.f_1 - 40f), (Var0.f_2 - 40f), (Var0.x + 40f), (Var0.f_1 + 40f), (Var0.f_2 + 40f), true, true);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(426.035f, -644.93f, -100f, 421.035f, -644.93f, 100f, 55f, 1);
  VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
  PED::CLEAR_PED_NON_CREATION_AREA();
  PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
  AUDIO::STOP_STREAM();
  func_533(uParam0, 0);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  SCRIPT::TERMINATE_THIS_THREAD();
}