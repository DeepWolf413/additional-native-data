// shop_horse_shop.ysc @ L63880
void func_1909(var uParam0, int iParam1)
{
  uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
  if (iParam1 != 0)
  {
    iParam1 = -iParam1;
    uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
  }
  func_1035(uParam0, 1);
  func_1036(uParam0, 2);
  uParam0->f_2 = 0;
}