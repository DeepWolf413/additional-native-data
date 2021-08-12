// startup.ysc @ L831
void func_35()
{
  char* sVar0;

  sVar0 = NETWORK::_GET_LAUNCH_PARAM_STRING();
  if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    sVar0 = func_87();
    SCRIPTS::_0xE98204D3C25AE14C(sVar0);
    return;
  }
  SCRIPTS::_0xE98204D3C25AE14C(sVar0);
}