// business_battles.ysc @ L173872
void func_2070(bool bParam0)
{
  if (func_4105(PLAYER::PLAYER_ID(), 1, 1))
  {
  }
  if (func_1868(PLAYER::PLAYER_PED_ID()))
  {
  }
  if (bParam0 && func_2091())
  {
    if (!func_2085(PLAYER::PLAYER_PED_ID(), func_2087(), -1))
    {
      STREAMING::REQUEST_CLIP_SET("move_m@bag");
      if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
      {
        func_2080(PLAYER::PLAYER_PED_ID(), func_2087(), -1);
        PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_m@bag", 0.25f);
      }
    }
  }
  else if (func_2085(PLAYER::PLAYER_PED_ID(), func_2087(), -1))
  {
    func_2071(PLAYER::PLAYER_PED_ID(), func_2087(), -1, -1);
    STREAMING::REMOVE_CLIP_SET("move_m@bag");
    PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
  }
}