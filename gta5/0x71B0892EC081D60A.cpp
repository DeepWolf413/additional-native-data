// am_vehicle_spawn.ysc @ L306883
int func_5185(struct<3> Param0, float fParam3, bool bParam4)
{
  if (!(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52) && ENTITY::DOES_ENTITY_EXIST(Global_2441237.f_843[PLAYER::PLAYER_ID()])))
  {
    if (func_401(func_542()))
    {
      if (func_732(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), func_542(), Param0, fParam3, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0))
      {
        func_5186(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), 1, 0);
        func_1253(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52);
        VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), false);
        VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), true);
        VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), Global_262145.f_21450);
        VEHICLE::_0xD565F438137F0E10(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), 1);
        if (bParam4)
        {
          NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_52), true, 1);
        }
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_542());
        Global_2544210.f_5985 = 0;
        Global_2544210.f_5986 = 0;
        return 1;
      }
    }
  }
  return 0;
}