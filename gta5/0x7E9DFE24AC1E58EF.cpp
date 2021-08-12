// fbi2.ysc @ L146865
void func_1064()
{
  int iVar0;
  
  if (((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), 112.4255f, -697.9334f, 38.0273f, 180.0502f, -654.663f, 53.14103f, false, true) || FIRE::IS_EXPLOSION_IN_AREA(-1, 112.4255f, -697.9334f, 38.0273f, 180.0502f, -654.663f, 53.14103f)) || (iLocal_31 == 0 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)) || (!bLocal_568 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0))
  {
    func_702(23);
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
    {
      if (ENTITY::GET_ENTITY_SPEED(iVar0) >= 1f)
      {
        if (ENTITY::DOES_ENTITY_EXIST(iLocal_243[0]))
        {
          if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_243[0]))
          {
            func_702(23);
          }
        }
        if (ENTITY::DOES_ENTITY_EXIST(iLocal_243[2]))
        {
          if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_243[2]))
          {
            func_702(23);
          }
        }
      }
    }
  }
}