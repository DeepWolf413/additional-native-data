// fillet_sp.ysc @ L7350
void func_272(var uParam0, int iParam1)
{
  if (!func_496(uParam0->f_592[iParam1 /*202*/]))
  {
    return;
  }
  if (TASK::GET_TASK_MOVE_NETWORK_EVENT(uParam0->f_592[iParam1 /*202*/], "IntroFinished"))
  {
  }
  if (func_508(uParam0->f_592[iParam1 /*202*/]))
  {
    func_509(uParam0, iParam1);
    func_510(&(uParam0->f_592[iParam1 /*202*/]));
    func_511(uParam0, iParam1);
    func_512(&(uParam0->f_592[iParam1 /*202*/]));
  }
  else
  {
    if (uParam0->f_592[iParam1 /*202*/].f_69 != -1f)
    {
      uParam0->f_592[iParam1 /*202*/].f_69 = -1f;
      TASK::_0xEAF87DA2BE78A15B(uParam0->f_592[iParam1 /*202*/], "ANIM_RATE");
    }
    if (uParam0->f_592[iParam1 /*202*/].f_70 != -1f)
    {
      uParam0->f_592[iParam1 /*202*/].f_70 = -1f;
      TASK::_0xEAF87DA2BE78A15B(uParam0->f_592[iParam1 /*202*/], "STABBING_SPEED");
    }
  }
  uParam0->f_592[iParam1 /*202*/].f_122++;
}