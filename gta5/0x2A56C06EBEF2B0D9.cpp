// bailbond1.ysc @ L1877
void func_68()
{
  if (func_427(Local_112.f_9))
  {
    if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
    {
      CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_444, Local_112.f_9, 0);
    }
  }
  if (func_427(Local_336))
  {
    if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
    {
      CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_443, Local_336, 0);
    }
  }
}