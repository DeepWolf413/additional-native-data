// am_mp_yacht.ysc @ L122382
void func_1047()
{
  if (MISC::IS_PREV_WEATHER_TYPE("RAIN") || MISC::IS_NEXT_WEATHER_TYPE("RAIN"))
  {
    func_1051();
  }
  else if (MISC::IS_NEXT_WEATHER_TYPE("THUNDER") || MISC::IS_PREV_WEATHER_TYPE("THUNDER"))
  {
    func_1050();
  }
  else if (MISC::IS_NEXT_WEATHER_TYPE("EXTRASUNNY") || MISC::IS_PREV_WEATHER_TYPE("EXTRASUNNY"))
  {
    func_1049();
  }
  else if (MISC::IS_NEXT_WEATHER_TYPE("FOGGY") || MISC::IS_PREV_WEATHER_TYPE("FOGGY"))
  {
    func_1048();
  }
}