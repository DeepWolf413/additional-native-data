// am_vehicle_spawn.ysc @ L306852
int func_5183(struct<3> Param0, float fParam3, bool bParam4)
{
  if (!(NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_53) && ENTITY::DOES_ENTITY_EXIST(Global_2441237.f_876[PLAYER::PLAYER_ID()])))
  {
    if (func_401(func_5114()))
    {
      if (func_732(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_53), func_5114(), Param0, fParam3, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0))
      {
        func_5184(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_53), 1, 0);
        func_1253(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_53);
        VEHICLE::_0xD565F438137F0E10(NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_53), 1);
        if (bParam4)
        {
          NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_53), true, 1);
        }
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5114());
        Global_2544210.f_5985 = 0;
        Global_2544210.f_5986 = 0;
        return 1;
      }
    }
  }
  return 0;
}