// act_cinema.ysc @ L93780
int func_626()
{
  if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
  {
    return 1;
  }
  return 0;
}