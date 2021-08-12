// am_taxi.ysc @ L5229
int func_111()
{
  int iVar0;
  
  iVar0 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
  if (MISC::IS_BIT_SET(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_2, 12))
  {
    iVar0 = (iVar0 - 1);
  }
  return iVar0;
}