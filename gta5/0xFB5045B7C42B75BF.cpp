// paparazzo2.ysc @ L58628
void func_639()
{
  if (!iLocal_2260)
  {
    iLocal_2450 = func_284();
    iLocal_2451 = func_640(iLocal_2450);
    if (iLocal_2451 > 22 || iLocal_2451 < 5)
    {
      MISC::CLEAR_WEATHER_TYPE_PERSIST();
      MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10f);
      iLocal_2260 = 1;
    }
  }
}