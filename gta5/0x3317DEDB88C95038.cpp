// act_cinema.ysc @ L26839
int func_241(int iParam0)
{
  if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
  {
    return 0;
  }
  switch (ENTITY::GET_ENTITY_MODEL(iParam0))
  {
    case joaat("player_zero"):
      return 0;
      break;
    
    case joaat("player_one"):
      return 1;
      break;
    
    case joaat("player_two"):
      return 2;
      break;
    
    case joaat("mp_m_freemode_01"):
      return 3;
      break;
    
    case joaat("mp_f_freemode_01"):
      return 4;
      break;
  }
  return 0;
}