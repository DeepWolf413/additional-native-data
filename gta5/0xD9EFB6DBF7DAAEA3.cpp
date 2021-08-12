// bailbond1.ysc @ L46999
int func_520(var uParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6, bool bParam7)
{
  if (!OBJECT::DOES_PICKUP_EXIST(*uParam0))
  {
    if (func_57(iParam6))
    {
      *uParam0 = OBJECT::CREATE_PICKUP(iParam1, Param2, iParam5, -1, true, iParam6);
      if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
      {
        if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
        {
          if (bParam7)
          {
            func_56(iParam6, 1);
          }
          return 1;
        }
      }
    }
  }
  else if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
  {
    if (bParam7)
    {
      func_56(iParam6, 0);
    }
    return 1;
  }
  return 0;
}