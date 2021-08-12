// am_mp_arcade.ysc @ L349565
void func_5630()
{
  if (MISC::IS_BIT_SET(Local_807, 24))
  {
    return;
  }
  if (!MISC::IS_BIT_SET(Local_807, 15))
  {
    if (func_5632())
    {
      MISC::SET_BIT(&Local_807, 15);
    }
  }
  else if (INTERIOR::IS_VALID_INTERIOR(func_5631()))
  {
    if (INTERIOR::IS_INTERIOR_READY(func_5631()))
    {
      INTERIOR::REFRESH_INTERIOR(func_5631());
      MISC::SET_BIT(&Local_807, 24);
      Global_1316911 = 1;
    }
    else
    {
      func_5632();
    }
  }
}