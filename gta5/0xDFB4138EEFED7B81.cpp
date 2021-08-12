// business_battles.ysc @ L184239
void func_2190()
{
  struct<3> Var0;
  
  if (!func_2193())
  {
    return;
  }
  if (!func_617(NETWORK::PARTICIPANT_ID(), 24) && !func_71(55))
  {
    if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
    {
      if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
      {
        if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("weapon_flare"), 100f, &Var0, true))
        {
          if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, func_2192(), true) <= func_2191())
          {
            func_3887(24);
            Local_3555[NETWORK::PARTICIPANT_ID_TO_INT() /*187*/].f_183 = { Var0 };
            func_619(-1, 0);
            func_2142(12, 1);
          }
        }
      }
    }
  }
}