// am_gang_call.ysc @ L10183
void func_263()
{
  MISC::CLEAR_BIT(&(Global_1590908[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*874*/].f_140), iLocal_286);
  Global_1590908[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*874*/].f_141 = -1;
  if (iLocal_286 == 1)
  {
    if (MISC::IS_INCIDENT_VALID(iLocal_470))
    {
      MISC::DELETE_INCIDENT(iLocal_470);
    }
  }
  func_513();
  func_545();
}