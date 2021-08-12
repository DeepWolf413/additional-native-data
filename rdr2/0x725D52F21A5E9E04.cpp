// ambush_bnd_cliff1.ysc @ L1445
void func_37(var uParam0)
{
  if (func_30(uParam0, 16384))
  {
    if (func_61(Global_35, 0, 1))
    {
      if (!func_30(uParam0, 1024))
      {
        if (uParam0->f_181 != -1 && !func_56(uParam0->f_151))
        {
          COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_183(uParam0->f_181));
          func_22(uParam0, 1024);
        }
      }
    }
  }
}