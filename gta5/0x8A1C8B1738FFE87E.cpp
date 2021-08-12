// business_battles.ysc @ L257107
void func_3984(var uParam0)
{
  func_2016();
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    *uParam0 = { func_3985() };
  }
}

Vector3 func_3985()
{
  struct<3> Var0;
  
  Var0 = -1;
  Var0.f_1 = -1;
  Var0.f_2 = -1000;
  Var0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
  Var0.x = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
  Var0.f_2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
  return Var0;
}