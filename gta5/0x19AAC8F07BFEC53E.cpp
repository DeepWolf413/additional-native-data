// am_contact_requests.ysc @ L55778
int func_770(int iParam0)
{
  if (STREAMING::IS_MODEL_A_VEHICLE(func_141(iParam0)))
  {
    func_719(iParam0);
    if (func_718(func_141(iParam0)))
    {
      if (func_771(iParam0))
      {
        return 1;
      }
    }
    else
    {
      func_690(iParam0, -1);
    }
  }
  return 0;
}