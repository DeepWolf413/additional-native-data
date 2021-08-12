// fm_content_auto_shop_delivery.ysc @ L30427
int func_866()
{
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(bLocal_1271) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(bLocal_1271) < 1)
  {
    return 0;
  }
  if (func_869())
  {
    return 1;
  }
  if (func_868())
  {
    if (func_867(bLocal_1271, 0, 1, 0) || func_808(bLocal_1271, 1))
    {
      return 1;
    }
  }
  return 0;
}