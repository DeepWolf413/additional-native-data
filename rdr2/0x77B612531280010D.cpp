// mob4.ysc @ L81062
float func_2407(int iParam0)
{
  float fVar0;

  fVar0 = PAD::GET_CONTROL_NORMAL(0, func_2396(iParam0));
  if (PAD::IS_LOOK_INVERTED())
  {
    return -fVar0;
  }
  return fVar0;
}