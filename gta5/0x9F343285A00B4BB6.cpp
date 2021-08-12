// am_challenges.ysc @ L14253
void func_431()
{
  int iVar0;
  int iVar1;
  
  if (func_5(Local_628.f_3))
  {
    if (Local_628.f_3 == 1 || Local_628.f_3 == 6)
    {
      iVar0 = func_453(PLAYER::PLAYER_ID(), 1);
      iVar1 = func_204(iVar0, 1);
      if (iVar1 < 11)
      {
        if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
        {
          WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, false);
          func_432(1);
        }
      }
      else
      {
        PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
      }
    }
  }
}