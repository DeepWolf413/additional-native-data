// am_mp_hangar.ysc @ L376271
float func_6225(var uParam0, var uParam1, var uParam2)
{
  if (MISC::IS_BIT_SET(*uParam2, 31))
  {
    if (((Global_99422.f_362 == 250816423 || Global_99422.f_362 == -1135649904) || Global_99422.f_362 == -478270020) || Global_99422.f_362 == 2084516274)
    {
      return func_6226(GRAPHICS::GET_TV_VOLUME(), -50f, 0.05f, 0);
    }
    else
    {
      return func_6226(GRAPHICS::GET_TV_VOLUME(), func_143(uParam0, uParam1), 0.05f, 0);
    }
  }
  if (MISC::IS_BIT_SET(*uParam2, 22) && !MISC::IS_BIT_SET(*uParam1, 3))
  {
    return -36f;
  }
  else
  {
    return func_143(uParam0, uParam1);
  }
  return -36f;
}