// fm_bj_race_controler.ysc @ L153717
void func_1665(bool bParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    if (bParam0)
    {
      func_1532();
    }
    PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
    PED::_0x711794453CFD692B(PLAYER::PLAYER_PED_ID(), 0);
    PLAYER::_SET_PLAYER_FALL_DISTANCE(PLAYER::PLAYER_ID(), -1f);
  }
}