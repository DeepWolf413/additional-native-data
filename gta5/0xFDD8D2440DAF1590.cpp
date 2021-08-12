// business_battles.ysc @ L163652
void func_1809(int iParam0)
{
  int iVar0;
  var uVar1;
  
  if (Global_262145.f_24986)
  {
    if (Global_262145.f_24987 > 0)
    {
      iVar0 = (Global_262145.f_24987 * iParam0);
      if (func_831())
      {
        func_1420(403506509, iVar0, &uVar1, 0, 1, 0);
      }
      else
      {
        MONEY::_NETWORK_EARN_FROM_BB_EVENT_BONUS(iVar0);
      }
    }
  }
}