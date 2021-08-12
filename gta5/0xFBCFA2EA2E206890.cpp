// am_challenges.ysc @ L23504
char* func_673()
{
  if (unk_0xC33B9889A311ABB0())
  {
    return "HUD_LBD_FMF";
  }
  if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
  {
    return "HUD_LBD_FMC";
  }
  if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
  {
    return "HUD_LBD_FMS";
  }
  if (NETWORK::NETWORK_SESSION_IS_SOLO())
  {
    return "HUD_LBD_FMI";
  }
  return "HUD_LBD_FMP";
}