// fm_lts_creator.ysc @ L7762
void func_78()
{
  if (func_40())
  {
    if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
      ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
    }
  }
  PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID(), 0);
}