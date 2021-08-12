// freemode.ysc @ L153884
void func_1964(var uParam0, bool bParam1)
{
  if (uParam0->f_2263[bParam1])
  {
    if (WEAPON::_REMOVE_AIR_DEFENSE_ZONE(uParam0->f_2384[bParam1]))
    {
    }
    uParam0->f_2263[bParam1] = 0;
    uParam0->f_2384[bParam1] = 0;
  }
}