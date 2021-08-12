// am_pi_menu.ysc @ L377202
int func_5419(bool bParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
  if (!PED::IS_PED_INJURED(iVar0))
  {
    if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
    {
      iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
      if (((((VEHICLE::GET_VEHICLE_CLASS(iVar1) == 8 || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("blazer")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("blazer3")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("blazer4")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("verus")) || (Global_262145.f_2409 != 0 && ENTITY::GET_ENTITY_MODEL(iVar1) == Global_262145.f_2409))
      {
        if (func_3115(iVar0, iVar1) == -1)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}