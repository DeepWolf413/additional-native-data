// agency_heist3a.ysc @ L136885
int func_1083(int iParam0)
{
  struct<3> Var0;
  float fVar3;
  
  Var0 = { ENTITY::GET_ENTITY_COORDS(Local_264, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
  fVar3 = fVar3;
  switch (iParam0)
  {
    case 0:
      if (PLAYER::_0xDD2620B7B9D16FF1(PLAYER::PLAYER_ID(), 0.7f))
      {
        if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_264, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1f, 1.1f, -1.3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1f, 1.1f, 1f), 1.6f, false, true, 0))
        {
          return 1;
        }
      }
      break;
    
    case 1:
      if (PLAYER::_0xDD2620B7B9D16FF1(PLAYER::PLAYER_ID(), 0.4f))
      {
        if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_264, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -0.5f, 0.5f, -1.3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, 0.5f, 1f), 0.75f, false, true, 0))
        {
          return 1;
        }
      }
      break;
  }
  return 0;
}