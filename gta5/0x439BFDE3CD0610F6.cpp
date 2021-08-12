// main_persistent.ysc @ L334705
void func_5290(int iParam0)
{
  var uVar0;
  
  if (func_55(PLAYER::PLAYER_ID(), 0))
  {
    if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 13))
    {
      if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
      {
        if (NETWORK::NETWORK_HAS_FOLLOW_INVITE())
        {
          if (func_5296() != 2 && func_5293())
          {
            if (NETWORK::NETWORK_ACTION_FOLLOW_INVITE())
            {
              NETWORK::NETWORK_CLEAR_FOLLOW_INVITE();
              NETWORK::_NETWORK_BLOCK_KICKED_PLAYERS(true);
              func_5292();
            }
          }
          else
          {
            func_5291();
            NETWORK::NETWORK_CLEAR_FOLLOW_INVITE();
          }
        }
      }
    }
  }
}