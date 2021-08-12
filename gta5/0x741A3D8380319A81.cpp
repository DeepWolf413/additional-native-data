// am_mp_arc_cab_manager.ysc @ L89590
void func_713()
{
  if (func_87(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319.f_9 == PLAYER::PLAYER_ID())
    {
      if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
      {
        if (!func_100(&(Local_1312.f_735)))
        {
          if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_714())
          {
            NETWORK::_0x741A3D8380319A81();
            func_99(&(Local_1312.f_735), 1, 0);
          }
        }
        else if (func_98(&(Local_1312.f_735), 1000, 1))
        {
          func_97(&(Local_1312.f_735));
        }
      }
    }
  }
}