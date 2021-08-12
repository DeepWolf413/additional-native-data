// fmmc_launcher.ysc @ L628988
void func_10436(var uParam0, int iParam1)
{
  if (iParam1 && func_10442())
  {
    return;
  }
  if (func_10441(uParam0) != 5 && func_10441(uParam0) != 11)
  {
    if (!func_10440(uParam0))
    {
      if (func_10439())
      {
        if (func_10438(uParam0) == 0 || func_10437(uParam0))
        {
          if (PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION"))
          {
            PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "MICHAEL_ACTION");
          }
        }
        else if (PED::HAS_ACTION_MODE_ASSET_LOADED("TREVOR_ACTION"))
        {
          PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "TREVOR_ACTION");
        }
      }
      else
      {
        PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
      }
    }
  }
}