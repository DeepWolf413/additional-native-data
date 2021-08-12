// agency_heist3b.ysc @ L137638
int func_1061(int iParam0)
{
  int iVar0;
  
  if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
      if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
      {
        return 1;
      }
    }
  }
  return 0;
}