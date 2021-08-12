// rcm_here_kitty_kitty3.ysc @ L9561
bool func_325(var uParam0)
{
  if (!func_79(&uLocal_234))
  {
    if (func_649(uParam0))
    {
      if (func_324(uParam0, 1, 0))
      {
        if (!ENTITY::IS_ENTITY_DEAD(iLocal_326))
        {
          ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_326, 1578.771f, -254.531f, 80.01f, 212.03f, true, false, true);
          func_268(&uLocal_234);
        }
      }
    }
  }
  else if (!func_6(uParam0->f_172, 16))
  {
    func_291(uParam0, 2);
    func_650(uParam0);
  }
  else if (func_6(uParam0->f_172, 1))
  {
    func_239(&uLocal_234);
    PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
    func_503(134217728);
    VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_326, 1, true);
    VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_326, 3, true);
    return true;
  }
  return false;
}