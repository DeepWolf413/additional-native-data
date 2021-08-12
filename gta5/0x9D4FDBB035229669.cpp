// fm_mission_controller.ysc @ L194241
void func_2438()
{
  int iVar0;
  int iVar1;
  
  if (Global_4456448.f_108838 == 1)
  {
    iVar1 = func_2118(joaat("mpply_heist_1stperson_prog"));
    MISC::SET_BIT(&iVar1, bLocal_1711);
    func_2116(joaat("mpply_heist_1stperson_prog"), iVar1);
    if (func_2439(iVar1))
    {
      if (!func_2380(20))
      {
        func_2400(20, 1);
        if (func_1952())
        {
          func_1941(-2130199671, Global_262145.f_4700, &iVar0, 0, 1, 0);
          MemCopy(&(Global_4265506[iVar0 /*85*/].f_14.f_26), {Global_4456448.f_85822}, 8);
          StringCopy(&(Global_4265506[iVar0 /*85*/].f_14.f_34), "First Person", 24);
        }
        else
        {
          MONEY::_NETWORK_EARN_JOB_BONUS_HEIST_AWARD(Global_262145.f_4700, &(Global_4456448.f_85822), "First Person");
        }
        Global_2453903.f_3478.f_145 = 1;
        Global_2453903.f_3478.f_146 = Global_262145.f_4700;
      }
    }
  }
}