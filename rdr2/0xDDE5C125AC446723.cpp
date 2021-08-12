// beat_prison_wagon.ysc @ L7085
void func_180()
{
  if (bLocal_1253)
  {
    return;
  }
  if ((iLocal_1500 != 5 && iLocal_1500 != 4) && iLocal_1500 != 6)
  {
    return;
  }
  if (ENTITY::IS_ENTITY_IN_WATER(iLocal_1505))
  {
    if (!func_131(&uLocal_1560))
    {
      func_133(&uLocal_1560);
    }
    else if (func_141(&uLocal_1560, 0.6f))
    {
      if (func_44(0, 1, uLocal_1476[4], 1))
      {
        if (func_49(uLocal_1476[4], 0, sLocal_638, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
        {
          bLocal_1253 = true;
        }
      }
    }
  }
}