// clothes_shop_mp.ysc @ L173701
void func_794(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  if (iParam0 == PLAYER::PLAYER_PED_ID())
  {
    STATS::PLAYSTATS_CLOTH_CHANGE(iParam0, iParam1, iParam2, iParam3, iParam4);
  }
}