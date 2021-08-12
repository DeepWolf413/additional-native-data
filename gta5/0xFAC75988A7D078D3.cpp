// director_mode.ysc @ L130452
void func_919()
{
  if (iLocal_13643[3] == 0)
  {
    PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
  }
  if (iLocal_13643[2] == 4)
  {
    if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
    {
      PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
    }
  }
}