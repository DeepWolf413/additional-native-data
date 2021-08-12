// fm_deathmatch_creator.ysc @ L153811
void func_1158()
{
  float fVar0;
  
  if (((((func_1223(PLAYER::PLAYER_ID()) || func_1224(PLAYER::PLAYER_ID())) || (Global_262145.f_10254 == 1 && !func_1161(PLAYER::PLAYER_ID(), 1))) || MISC::IS_BIT_SET(Global_4456448.f_13, 31)) || MISC::IS_BIT_SET(Global_4456448.f_14, 8)) || Global_1590763)
  {
    if (func_1160(PLAYER::PLAYER_PED_ID()))
    {
      PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((IntToFloat(PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID())) * 1.5f)));
      MISC::SET_BIT(&(Global_2544210.f_1796), 20);
      fVar0 = Global_262145.f_10252;
      fVar0 = func_1116(fVar0, 0.10005f, 2f);
      PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), fVar0);
      if (func_319(PLAYER::PLAYER_PED_ID()) && !func_1159(PLAYER::PLAYER_PED_ID()))
      {
        PED::SET_MOVEMENT_MODE_OVERRIDE(PLAYER::PLAYER_PED_ID(), "MP_FEMALE_ACTION");
      }
    }
  }
}