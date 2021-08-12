// agency_heist1.ysc @ L102484
int func_558()
{
  float fVar0;
  
  if (!func_560())
  {
    return 0;
  }
  if ((VEHICLE::IS_THIS_MODEL_A_BOAT(Global_105842.f_2890.f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_PLANE(Global_105842.f_2890.f_12.f_66)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_105842.f_2890.f_12.f_66))
  {
    return 0;
  }
  fVar0 = VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Global_105842.f_2890.f_12.f_66);
  if (fVar0 < 37f)
  {
    return 0;
  }
  return 1;
}