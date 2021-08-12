// abigail2_1.ysc @ L26331
int func_479()
{
  float fVar0;

  fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
  if (fVar0 < 0.01f)
  {
    return 19;
  }
  if (fVar0 < 0.16f)
  {
    return 15;
  }
  if (fVar0 < 0.31f)
  {
    return 17;
  }
  if (fVar0 < 0.46f)
  {
    return 16;
  }
  if (fVar0 < 0.61f)
  {
    return 18;
  }
  return 0;
}