// event_area_centralunion_stg1.ysc @ L5772
bool func_105()
{
  if (func_279(iLocal_3981[0], 0, &uLocal_2114, &iLocal_2142, 0, 0))
  {
    if (func_345(iLocal_2142))
    {
      func_107(&uLocal_2114, &iLocal_2142);
      return false;
    }
    return true;
  }
  if (PED::_0x57779B55B83E2BEA(iLocal_3981[0]))
  {
    return true;
  }
  return false;
}