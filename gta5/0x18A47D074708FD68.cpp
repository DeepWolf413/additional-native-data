// act_cinema.ysc @ L94548
int func_655()
{
  if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_636())
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_38))
    {
      return NETWORK::NET_TO_VEH(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_38);
    }
  }
  return Global_2544210.f_298;
}