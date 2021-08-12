// act_cinema.ysc @ L90724
int func_590(int iParam0)
{
  if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
  {
    return 1;
  }
  return 0;
}