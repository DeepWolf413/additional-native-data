// pausemenu_multiplayer.ysc @ L75
bool func_2()
{
  if (MISC::IS_ORBIS_VERSION())
  {
    if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
    {
      NETWORK::_0x5C497525F803486B();
      return false;
    }
  }
  func_4(68);
  func_5(joaat("MISSION_CREATOR"), 2);
  func_6(3);
  return true;
}