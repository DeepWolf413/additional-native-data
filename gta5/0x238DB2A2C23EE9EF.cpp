// agency_heist1.ysc @ L2121
int func_44()
{
  if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
  {
    return 0;
  }
  switch (func_25())
  {
    case 0:
      if (Global_112293.f_9083.f_99.f_58[65])
      {
        return 1;
      }
      break;
    
    case 1:
      if (Global_112293.f_9083.f_99.f_58[66])
      {
        return 1;
      }
      break;
    
    case 2:
      if (Global_112293.f_9083.f_99.f_58[65])
      {
        return 1;
      }
      break;
  }
  return 0;
}