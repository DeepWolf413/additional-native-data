// am_mp_casino_nightclub.ysc @ L368146
void func_5209(var uParam0)
{
  int iVar0;
  
  if (func_4798(&(uParam0->f_773.f_10), 45000, 0))
  {
    func_4800(&(uParam0->f_773.f_8));
    func_4799(&(uParam0->f_773.f_8), 0, 0);
  }
  if ((((((uParam0->f_628 > 0f || uParam0->f_3 == 1) || uParam0->f_2 == 6) || uParam0->f_2 == 7) || PAD::IS_CONTROL_PRESSED(0, 226)) || PAD::IS_CONTROL_PRESSED(0, 227)) || SYSTEM::VMAG2(PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f) > 0.3f)
  {
    func_4800(&(uParam0->f_773.f_10));
  }
  if (func_4798(&(uParam0->f_773.f_8), 60000, 0))
  {
    if (uParam0->f_930 == 3)
    {
      iVar0 = (1 + func_408(7236, -1, 0));
      func_199(7236, iVar0, -1, 1, 0);
    }
    func_5210(uParam0);
    func_4800(&(uParam0->f_773.f_8));
    func_4799(&(uParam0->f_773.f_8), 0, 0);
  }
}