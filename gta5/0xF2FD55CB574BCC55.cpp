// fmmc_launcher.ysc @ L572914
void func_8892(var uParam0)
{
  struct<16> Var0;
  bool bVar16;
  bool bVar17;
  
  Var0 = { func_7144((func_6708() - 1)) };
  bVar16 = false;
  bVar17 = false;
  if (func_792(uParam0->f_439))
  {
    bVar16 = NETWORK::NETWORK_GAMER_HAS_HEADSET(&(uParam0->f_439));
    if (!uParam0->f_482)
    {
      if (func_7573(&(uParam0->f_439)))
      {
        bVar17 = true;
      }
    }
  }
  func_8893(3, uParam0->f_1213, &Var0, func_8894((func_6708() - 1)), &(Global_2453903.f_1.f_845[(func_6708() - 1) /*57*/].f_36), func_7265((func_6708() - 1)), &(uParam0->f_454), &(uParam0->f_471), Global_2453903.f_1.f_845[(func_6708() - 1) /*57*/].f_46, uParam0->f_482, bVar16, uParam0->f_475, uParam0->f_476, uParam0->f_477, bVar17);
  func_7833(3, 1);
}