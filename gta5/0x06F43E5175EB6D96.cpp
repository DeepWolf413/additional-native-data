// fmmc_launcher.ysc @ L547020
int func_8519(var uParam0)
{
  if ((func_327(0) && func_11165() == 25) && func_6716(PLAYER::PLAYER_ID(), 1))
  {
    VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_489, 5, 0);
    VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_489, 5, 1);
    VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_489, 5, 2);
    if (!VEHICLE::HAS_PRELOAD_MODS_FINISHED(uParam0->f_489))
    {
      if (!func_147(208))
      {
        func_4908(208);
      }
      return 0;
    }
    if (!func_147(209))
    {
      func_4908(209);
    }
    if (func_147(208))
    {
      func_4829(208);
    }
  }
  return 1;
}