// fm_content_island_dj.ysc @ L29262
int func_908()
{
  int iVar0;
  int iVar1;
  
  if (func_868() < 3)
  {
    return 0;
  }
  if (NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_503(), -1, 0) < Local_3123.f_466)
  {
    func_909();
  }
  iVar0 = 0;
  while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
    if (func_694(iVar1, 4) && func_420(iVar1, 1))
    {
      return 1;
    }
    else if (func_661(8))
    {
      if (func_420(iVar1, 1))
      {
        return 1;
      }
    }
    iVar0++;
  }
  return 0;
}