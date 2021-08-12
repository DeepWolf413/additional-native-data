// am_mp_casino_nightclub.ysc @ L370313
void func_5307(var uParam0)
{
  if (!func_5269(uParam0))
  {
    return;
  }
  if (func_5267(uParam0, 0, 15000))
  {
    func_5266(uParam0, 3);
    func_5255(uParam0);
    return;
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_950, 713668775) == 1)
  {
    return;
  }
  func_5308(uParam0);
  CAM::SHAKE_GAMEPLAY_CAM("CLUB_DANCE_SHAKE", 0.3f);
  func_4800(&(uParam0->f_649));
  func_4799(&(uParam0->f_649), 0, 0);
  func_4800(&(uParam0->f_655));
  func_4799(&(uParam0->f_655), 0, 0);
  func_5266(uParam0, 10);
}