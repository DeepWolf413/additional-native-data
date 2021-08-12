// fm_mission_controller.ysc @ L636812
void func_10477()
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(iLocal_3286))
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3286, false))
    {
      func_10478();
      iVar0 = 0;
      WEAPON::GET_CURRENT_PED_WEAPON(iLocal_3286, &iVar0, true);
      if (iVar0 != joaat("weapon_unarmed"))
      {
        PED::SET_PED_RESET_FLAG(iLocal_3286, 128, true);
        PLAYER::DISABLE_PLAYER_FIRING(bLocal_3284, true);
        if (func_10050(iVar0))
        {
          WEAPON::SET_CURRENT_PED_WEAPON(iLocal_3286, joaat("weapon_unarmed"), true);
          WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(joaat("weapon_grenade"), false);
          WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(joaat("weapon_stickybomb"), false);
        }
      }
    }
  }
}