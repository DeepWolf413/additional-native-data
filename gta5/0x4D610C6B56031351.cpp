// fm_bj_race_controler.ysc @ L123171
void func_1442(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::IS_ENTITY_DEAD(*uParam0, false)))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      *uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("ruiner2"))
    {
      if (func_377())
      {
        VEHICLE::_SET_VEHICLE_PARACHUTE_MODEL(*uParam0, joaat("sr_prop_specraces_para_s_01"));
        VEHICLE::_SET_VEHICLE_PARACHUTE_TEXTURE_VARIATIION(*uParam0, (PLAYER::PLAYER_ID() % 7));
      }
      else if (Global_1390680 < 8)
      {
        VEHICLE::_SET_VEHICLE_PARACHUTE_MODEL(*uParam0, joaat("sr_prop_specraces_para_s_01"));
        VEHICLE::_SET_VEHICLE_PARACHUTE_TEXTURE_VARIATIION(*uParam0, Global_1390680);
      }
    }
  }
}