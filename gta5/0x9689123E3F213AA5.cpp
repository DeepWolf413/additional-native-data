// main.ysc @ L149476
void func_1815()
{
  if (Global_112293.f_9083.f_99.f_58[98])
  {
    if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), false)) && !MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0, false, false);
    }
  }
}