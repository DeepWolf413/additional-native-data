// fmmc_launcher.ysc @ L505110
void func_7869(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    if (Global_2450309.f_420[iParam0] == 0)
    {
      PED::SET_PED_MOVEMENT_CLIPSET(Global_2450309[iParam0 /*13*/], "ANIM_GROUP_MOVE_BALLISTIC", 0.25f);
      PED::SET_PED_STRAFE_CLIPSET(Global_2450309[iParam0 /*13*/], "MOVE_STRAFE_BALLISTIC");
      WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(Global_2450309[iParam0 /*13*/], 1429513766);
      Global_2450309.f_420[iParam0] = 1;
    }
  }
  else if (Global_2450309.f_420[iParam0] == 1)
  {
    PED::RESET_PED_MOVEMENT_CLIPSET(Global_2450309[iParam0 /*13*/], 0.25f);
    PED::RESET_PED_STRAFE_CLIPSET(Global_2450309[iParam0 /*13*/]);
    WEAPON::SET_WEAPON_ANIMATION_OVERRIDE(Global_2450309[iParam0 /*13*/], joaat("DEFAULT"));
    Global_2450309.f_420[iParam0] = 0;
  }
}