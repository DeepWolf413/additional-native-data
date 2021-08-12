// appbikerbusiness.ysc @ L17813
void func_404(int iParam0, int iParam1, int iParam2)
{
  if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::IS_STORE_AVAILABLE_TO_USER())
  {
    Global_74596 = iParam0;
    Global_74597 = iParam1;
    Global_74595 = 1;
    Global_4271134 = iParam2;
  }
}