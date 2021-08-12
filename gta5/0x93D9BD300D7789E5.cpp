// am_vehicle_spawn.ysc @ L16778
void func_479()
{
  int iVar0;
  
  if (func_8(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (func_480(PLAYER::PLAYER_ID(), -1))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
      {
        if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("trash2")))
        {
          Local_2351.f_3 = 51;
          Local_2351.f_2 = 0;
          if (func_335(&Local_2351, 0, 500))
          {
            if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 5) == 0f)
            {
              VEHICLE::SET_VEHICLE_DOOR_OPEN(iVar0, 5, false, false);
            }
            else
            {
              VEHICLE::SET_VEHICLE_DOOR_SHUT(iVar0, 5, false);
            }
          }
        }
      }
    }
  }
}