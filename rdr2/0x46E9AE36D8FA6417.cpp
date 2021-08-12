// abigail21_outro.ysc @ L184
int func_8(var uParam0)
{
  if ((!func_16(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
  {
    return 0;
  }
  return func_21(uParam0);
}