// armenian1.ysc @ L52949
int func_497(int iParam0, int iParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, false) };
  }
  else
  {
    return 0;
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
  {
    Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, false) };
  }
  else
  {
    return 0;
  }
  Var0.f_2 = 0f;
  Var3.f_2 = 0f;
  fVar6 = func_485(Var0, Var3);
  if (fVar6 < 0f)
  {
    return 0;
  }
  return 1;
}