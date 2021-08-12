// am_mp_car_meet_property.ysc @ L355648
int func_5522(int iParam0)
{
  int iVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  func_5525(iParam0, &Var4);
  iVar0 = 0;
  while (iVar0 < 16)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_1315.f_1653[iVar0]))
    {
      if (Local_1315.f_1653.f_18[iVar0] != iParam0)
      {
        if (OBJECT::_SET_OBJECT_LIGHT_COLOR(Local_1315.f_1653[iVar0], iParam0 > 0, SYSTEM::FLOOR(Var4.x), SYSTEM::FLOOR(Var4.f_1), SYSTEM::FLOOR(Var4.f_2)))
        {
          Local_1315.f_1653.f_18[iVar0] = iParam0;
        }
        return 0;
      }
    }
    else if (Local_1315.f_1653.f_18[iVar0] != iParam0)
    {
      func_5524(iVar0, &Var1);
      Local_1315.f_1653[iVar0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 2f, func_5523(), false, false, false);
      return 0;
    }
    iVar0++;
  }
  return 1;
}