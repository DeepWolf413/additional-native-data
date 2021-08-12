// fm_mission_controller.ysc @ L251217
void func_3252(bool bParam0)
{
  NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(bParam0, true);
  if (bParam0 == 1)
  {
    NETWORK::_SET_GHOSTED_ENTITY_ALPHA(50);
  }
  else
  {
    NETWORK::_RESET_GHOSTED_ENTITY_ALPHA();
  }
}