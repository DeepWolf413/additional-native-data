// fm_capture_creator.ysc @ L31909
void func_448()
{
  bool bVar0;
  
  bVar0 = PLAYER::PLAYER_ID();
  Global_2426865[bVar0 /*449*/].f_218 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true, 0);
  Global_2426865[bVar0 /*449*/].f_219 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true, 0);
  Global_2426865[bVar0 /*449*/].f_220 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true, 0);
  if (MISC::IS_BIT_SET(Global_1391771, 0))
  {
    if (((Global_1391779 == 0 || Global_1391780 == 0) || Global_1391781 == 0) || Global_1391782 == 0)
    {
      MISC::CLEAR_BIT(&Global_1391771, 0);
    }
    else
    {
      func_453();
    }
  }
  else
  {
    Global_1391779 = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
    Global_1391780 = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
    Global_1391781 = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
    Global_1391782 = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
    func_452();
    MISC::SET_BIT(&Global_1391771, 0);
  }
  func_449();
}