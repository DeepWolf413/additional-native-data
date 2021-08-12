// campfire_gang.ysc @ L25671
bool func_533(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (func_147(uParam0->f_548[iVar0 /*9*/].f_3))
    {
    }
    else
    {
      uParam0->f_548[iVar0 /*9*/].f_2 = PED::_0x9641A9A20310F6B8(uParam0->f_548[iVar0 /*9*/], uParam0->f_548[iVar0 /*9*/].f_3, uParam0->f_548[iVar0 /*9*/].f_6, 0, 0, 0);
      PED::_0x13E7320C762F0477(uParam0->f_548[iVar0 /*9*/].f_1);
    }
    iVar0++;
  }
  return true;
}