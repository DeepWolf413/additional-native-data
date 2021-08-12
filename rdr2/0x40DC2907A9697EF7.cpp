// medium_update.ysc @ L12340
void func_362()
{
  vector3 vVar0;

  if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1935369.f_46[Global_1935369], false))
  {
    if (SCRIPTS::HAS_SCRIPT_LOADED("saloon_dining"))
    {
      if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6005) > 0)
      {
        vVar0.x = Global_1935369.f_5[Global_1935369 /*11*/].f_6;
        vVar0.f_1 = Global_1935369;
        vVar0.f_2 = { Global_1935369.f_5[Global_1935369 /*11*/].f_1 };
        Global_1935369.f_46[Global_1935369] = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("saloon_dining", &vVar0, 5, 6005);
        SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("saloon_dining");
      }
    }
    else
    {
      SCRIPTS::REQUEST_SCRIPT("saloon_dining");
    }
  }
}