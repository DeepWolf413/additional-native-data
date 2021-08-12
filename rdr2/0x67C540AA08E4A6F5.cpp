// abigail2_1.ysc @ L41500
void func_1035(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
  int iVar0;

  if (func_590(iParam0) != joaat("WEAPON"))
  {
    return;
  }
  iVar0 = func_597(iParam0, 0);
  if (!WEAPON::IS_WEAPON_VALID(iVar0))
  {
    return;
  }
  if (bParam2 || !func_122(iVar0))
  {
    if (func_20() == -1)
    {
      func_598(iVar0);
    }
    if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_575(iParam0, 0, 0) == 0))
    {
      if (!*bParam3 && !iParam4 == 1248274121)
      {
        func_651(iParam0, iParam1, 0, 0, 0);
        AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
        *bParam3 = 1;
      }
    }
  }
}