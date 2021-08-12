// am_mp_arcade.ysc @ L60142
void func_437()
{
  if (!MISC::IS_BIT_SET(Local_807.f_1, 25))
  {
    if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
    {
      STREAMING::NEW_LOAD_SCENE_STOP();
    }
    STREAMING::NEW_LOAD_SCENE_START_SPHERE(2700.889f, -361.5495f, -56.1867f, 50f, 0);
    MISC::SET_BIT(&(Local_807.f_1), 25);
  }
  else if (!MISC::IS_BIT_SET(Local_807.f_1, 26))
  {
    if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
    {
      if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
      {
        STREAMING::NEW_LOAD_SCENE_STOP();
        MISC::SET_BIT(&(Local_807.f_1), 26);
      }
    }
    else
    {
      MISC::SET_BIT(&(Local_807.f_1), 26);
    }
  }
}