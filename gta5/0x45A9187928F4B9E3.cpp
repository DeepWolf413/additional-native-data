// act_cinema.ysc @ L94593
bool func_659()
{
  return MISC::IS_BIT_SET(Global_4456448.f_127830, 12);
}

Vector3 func_660(int iParam0, struct<3> Param1)
{
  struct<3> Var0;
  struct<3> Var3;
  
  if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
  {
    return Param1;
  }
  func_88(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
  Param1.f_2 = (Param1.f_2 + ((Var3.f_2 - Var0.f_2) * 0.5f));
  return Param1;
}