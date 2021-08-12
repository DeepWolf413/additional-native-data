// odriscolls1.ysc @ L80730
void func_1846()
{
  if (!func_214())
  {
    if (iLocal_83 == 1 || iLocal_124 == 1)
    {
      switch (iLocal_3792)
      {
        case 0:
          if (func_1738(&iLocal_3732, 2000))
          {
            if (PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) <= 1f)
            {
              uLocal_4047[19] = func_711("DST1_HELP_HEALTH0", 10000, 0, 0, 0, 1);
              iLocal_3792++;
            }
          }
          break;
        case 1:
          break;
      }
    }
  }
}