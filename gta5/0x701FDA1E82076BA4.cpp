// am_doors.ysc @ L1255
void func_45()
{
  if (func_46())
  {
    if (!iLocal_133)
    {
      OBJECT::_0xC7F29CA00F46350E(true);
      iLocal_133 = 1;
    }
  }
  else if (iLocal_133 == 1)
  {
    iLocal_133 = 0;
    OBJECT::_0x701FDA1E82076BA4();
  }
}