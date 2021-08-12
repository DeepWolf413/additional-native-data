// am_cp_collection.ysc @ L13380
void func_309()
{
  if (Local_804 != -1 && Local_804.f_1 != -1)
  {
    if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_311() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
    {
      func_310(Local_804.f_1, Local_804, func_261(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
      Local_804 = -1;
      Local_804.f_1 = -1;
    }
  }
}