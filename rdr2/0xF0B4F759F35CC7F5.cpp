// act_hunting_2.ysc @ L45198
bool func_1298()
{
  int iVar0;

  if (func_1447() && !func_199(Local_15.f_631, 2048))
  {
    func_1297();
    func_528(&(Local_15.f_631), 2048);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Local_15.f_375))
  {
    Local_15.f_375 = OBJECT::CREATE_OBJECT(func_595(5), ENTITY::GET_ENTITY_COORDS(Local_15.f_307[2], true, false), false, true, false, false, true);
    return false;
  }
  if (!TASK::_0x0CCFE72B43C9CF96(Local_15.f_375))
  {
    iVar0 = ENTITY::_GET_OPTIMAL_CARRY_CONFIG(Local_15.f_375, 0);
    TASK::TASK_CARRIABLE(Local_15.f_375, iVar0, Local_15.f_307[2], func_1448(4), 0);
    return false;
  }
  if (ENTITY::_0x61914209C36EFDDB(Local_15.f_375) != 7)
  {
    return false;
  }
  return true;
}