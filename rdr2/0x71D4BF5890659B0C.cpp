// short_update.ysc @ L65920
int func_2163()
{
  if (func_2178(1049220))
  {
    return 1;
  }
  if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
  {
    if (!func_3291(Global_35))
    {
      return 1;
    }
  }
  if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
  {
    return 1;
  }
  if (Global_1935630.f_12)
  {
    return 1;
  }
  return 0;
}