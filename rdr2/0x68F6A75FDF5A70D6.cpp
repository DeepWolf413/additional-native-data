// loanshark_soldier.ysc @ L4818
bool func_169()
{
  if (func_166(1024))
  {
    return true;
  }
  if (func_396())
  {
    if (func_397())
    {
      func_398(1);
      FIRE::_0x68F6A75FDF5A70D6(Local_356.f_1, 10f);
      ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_356, false);
      func_173(1024);
      return true;
    }
  }
  return false;
}