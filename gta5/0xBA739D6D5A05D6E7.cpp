// clothes_shop_mp.ysc @ L173757
void func_796(int iParam0, int iParam1, int iParam2, int iParam3)
{
  if (iParam0 == PLAYER::PLAYER_PED_ID())
  {
    if (iParam2 > -1)
    {
      STATS::PLAYSTATS_PROP_CHANGE(iParam0, iParam1, iParam2, iParam3);
    }
  }
}