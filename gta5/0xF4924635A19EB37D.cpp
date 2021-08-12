// barry3.ysc @ L34898
int func_237()
{
  struct<3> Var0;
  float fVar3;
  
  if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_148) && STREAMING::HAS_MODEL_LOADED(iLocal_153)) && STREAMING::HAS_MODEL_LOADED(iLocal_154))
  {
    Var0 = { Local_354 };
    fVar3 = fLocal_365;
    if (func_238(PLAYER::PLAYER_PED_ID(), Local_354, 1) < func_238(PLAYER::PLAYER_PED_ID(), Local_357, 1))
    {
      Var0 = { Local_357 };
      fVar3 = fLocal_366;
    }
    iLocal_148 = VEHICLE::CREATE_VEHICLE(iLocal_153, Var0, fVar3, true, true, false);
    iLocal_149[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_148, 6, iLocal_154, -1, true, true);
    WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iLocal_149[0], joaat("weapon_pistol"), -1, true);
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_149[0], true, joaat("weapon_pistol"));
    iLocal_149[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_148, 6, iLocal_154, 0, true, true);
    WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iLocal_149[1], joaat("weapon_pistol"), -1, true);
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_149[1], true, joaat("weapon_pistol"));
    VEHICLE::SET_VEHICLE_SIREN(iLocal_148, true);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_148, 20f);
    TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_149[0], iLocal_148, Local_360, 20f, 1, iLocal_153, 786603, 5f, 5f);
    return 1;
  }
  return 0;
}