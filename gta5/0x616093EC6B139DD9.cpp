// fm_deathmatch_controler.ysc @ L320101
void func_4685(var uParam0)
{
  if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_7, false))
  {
    if (func_4686(uParam0))
    {
      OBJECT::_TOGGLE_USE_PICKUPS_FOR_PLAYER(PLAYER::PLAYER_ID(), joaat("pickup_vehicle_custom_script"), true);
    }
    else
    {
      OBJECT::_TOGGLE_USE_PICKUPS_FOR_PLAYER(PLAYER::PLAYER_ID(), joaat("pickup_vehicle_custom_script"), false);
    }
  }
}