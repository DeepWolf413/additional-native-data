// achievement_controller.ysc @ L15977
void func_152()
{
  int iVar0;
  int iVar1;
  
  ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
  if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
  {
    func_130(25, 1);
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
    if (ENTITY::IS_ENTITY_A_PED(iVar0))
    {
      iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
      if (func_153(iVar1))
      {
        if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("a_c_sharktiger"))
        {
          func_130(25, 1);
          return;
        }
      }
    }
  }
}