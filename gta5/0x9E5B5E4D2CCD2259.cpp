// fm_content_island_dj.ysc @ L26042
void func_668(int iParam0, int iParam1)
{
  switch (Local_223.f_356.f_1[iParam0 /*14*/].f_3)
  {
    case joaat("mule"):
      VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam1, 15f);
      VEHICLE::SMASH_VEHICLE_WINDOW(iParam1, 6);
      VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, 0, 5, 0.4f);
      ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
      break;
    
    case joaat("bodhi2"):
      VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
      VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam1, 15f);
      VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, 4, 5, 0.25f);
      VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, 51f);
      VEHICLE::SMASH_VEHICLE_WINDOW(iParam1, 6);
      AUDIO::SET_VEH_RADIO_STATION(iParam1, "RADIO_11_TALK_02");
      break;
  }
}