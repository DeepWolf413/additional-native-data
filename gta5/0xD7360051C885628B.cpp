// freemode.ysc @ L1000522
int func_15653()
{
  if (CAM::IS_CINEMATIC_CAM_RENDERING() && !CAM::_0xD7360051C885628B())
  {
    return 0;
  }
  if (func_15654())
  {
    return 0;
  }
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    return 0;
  }
  if (Global_1574206)
  {
    return 0;
  }
  if (Global_1312485.f_18 != 0)
  {
    return 0;
  }
  if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    return 0;
  }
  return 1;
}