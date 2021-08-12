// fmmc_launcher.ysc @ L355148
void func_5584(int iParam0, char* sParam1)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    NETWORK::NETWORK_APPLY_TRANSITION_PARAMETER_STRING(iParam0, sParam1, true);
  }
}