// finale1.ysc @ L41156
int func_897(var uParam0)
{
  func_1579(uParam0);
  func_1580(uParam0);
  func_1581(uParam0);
  if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() < 6000)
  {
    CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(6000);
  }
  switch (func_1365(uParam0))
  {
    case 0:
      if (func_1386(Global_35, func_410(12, 18), 280f, 1, 1))
      {
        return 1;
      }
      break;
  }
  return 0;
}