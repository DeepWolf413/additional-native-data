// winter1.ysc @ L77430
void func_2013()
{
  if (PED::IS_PED_PERFORMING_MELEE_ACTION(Local_14.f_18[0], 1, 0))
  {
    if (!func_177(iLocal_905, 8))
    {
      PED::_0x6DB875AFC584FA32(Local_14.f_18[0], iLocal_911);
      func_179(&iLocal_905, 8);
    }
  }
  else if (func_177(iLocal_905, 8))
  {
    func_485(&iLocal_905, 8);
  }
}