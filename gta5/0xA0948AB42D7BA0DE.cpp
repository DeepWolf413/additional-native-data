// act_cinema.ysc @ L101416
float func_756()
{
  if (func_995())
  {
    if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405077.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405077.f_45.f_67)) || Global_2405077.f_45.f_67 == joaat("rhino"))
    {
      return 640f;
    }
    else
    {
      return 320f;
    }
  }
  return 160f;
}