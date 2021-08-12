// act_cinema.ysc @ L67871
int func_345(int iParam0)
{
  if (((((iParam0 == joaat("blazer") || iParam0 == joaat("sanchez")) || iParam0 == joaat("sanchez2")) || iParam0 == joaat("blazer5")) || func_347(iParam0)) || func_346(iParam0))
  {
    return 1;
  }
  if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
  {
    return 1;
  }
  return 0;
}