// ingamehud.ysc @ L108139
void func_874(int iParam0, int iParam1)
{
  if (iParam0 == 0)
  {
    if (func_539())
    {
      func_538(1);
    }
    if (iParam1 == 1)
    {
      NETWORK::NETWORK_SET_ACTIVITY_SPECTATOR(false);
    }
  }
  else if (iParam1 == 1)
  {
    NETWORK::NETWORK_SET_ACTIVITY_SPECTATOR(true);
  }
  Global_1312898 = iParam0;
}