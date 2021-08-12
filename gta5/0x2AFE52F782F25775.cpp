// director_mode.ysc @ L17519
int func_246(int iParam0)
{
  if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iParam0) && func_195())
  {
    return 1;
  }
  return 0;
}