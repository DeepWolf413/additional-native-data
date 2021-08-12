// fm_mission_controller.ysc @ L176230
void func_2137(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (iParam0 > 0)
  {
    if (func_1952())
    {
      if (Global_1703479 == 1)
      {
        iVar1 = 1220095570;
      }
      else if (Global_1703479 == 2)
      {
        iVar1 = 2050320631;
      }
      else if (Global_1703479 == 3)
      {
        iVar1 = 592672421;
      }
      func_1941(iVar1, iParam0, &iVar0, 0, 1, 0);
      MemCopy(&(Global_4265506[iVar0 /*85*/].f_14.f_26), {Global_4456448.f_85822}, 8);
    }
    else
    {
      MONEY::_NETWORK_EARN_CASINO_HEIST_BONUS(iParam0, 0, 0, 1, iParam0);
    }
  }
}